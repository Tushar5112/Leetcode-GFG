class Solution:
    def climbStairs(self, n: int) -> int:
        temp=[1,1]
        for i in range(2,n+1):
            temp.append(temp[i-1]+temp[i-2])
        return temp[n]