class Solution:
    def uniquePathsWithObstacles(self, G: List[List[int]]) -> int:
        m, n, G[0][0] = len(G), len(G[0]), int(not G[0][0])
        for x, y in product(range(m), range(n)):
            if (x, y) == (0, 0):
                continue
            if G[x][y] == 1:
                G[x][y] = 0
            elif 0 in (x, y):
                G[x][y] = (G[x - 1][y] if x else G[x][y - 1])
            else:
                G[x][y] = G[x - 1][y] + G[x][y - 1]
        return G[-1][-1]