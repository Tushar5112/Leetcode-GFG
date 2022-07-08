class Solution:
    def minCost(self, houses: List[int], cost: List[List[int]], m: int, n: int, target: int) -> int:
        Ct = 10 ** 7

        fill_matrix = [[Ct for _ in range(target)] for _ in range(n)]

        if houses[0]:
            pre_matrix = [[Ct if _ or __ != houses[0] - 1 else 0 for _ in range(target + 1)] for __ in range(n)]
        else:
            pre_matrix = [[Ct if _ else cost[0][__] for _ in range(target + 1)] for __ in range(n)]


        for i in range(1, m):
            new_matrix = deepcopy(fill_matrix)
            if houses[i]:
                fix_col = houses[i] - 1
                for j in range(n):
                    if j != fix_col:
                        for o in range(target):
                            new_matrix[j][o] = 10 ** 7
                    else:
                        for k in range(n):
                            if j != k:
                                for o in range(target - 1):
                                    new_matrix[j][o + 1] = min(new_matrix[j][o + 1], pre_matrix[k][o])
                            else:
                                for o in range(target):
                                    new_matrix[j][o] = min(new_matrix[j][o], pre_matrix[j][o])
            else:
                for j in range(n):
                    for k in range(n):
                        if j != k:
                            for o in range(target - 1):
                                new_matrix[j][o + 1] = min(new_matrix[j][o + 1], pre_matrix[k][o] + cost[i][j])
                        else:
                            for o in range(target):
                                new_matrix[j][o] = min(new_matrix[j][o], pre_matrix[j][o] + cost[i][j])
            pre_matrix = new_matrix

        answer = min([pre_matrix[i][-1] for i in range(n)])
        if answer == Ct:
            return -1
        else:
            return answer