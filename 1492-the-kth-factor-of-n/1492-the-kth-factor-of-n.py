class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        factor=[x for x in range(1,n+1) if (n%x==0)] 
        try:
            return(factor[k-1])
        except:
            return(-1)