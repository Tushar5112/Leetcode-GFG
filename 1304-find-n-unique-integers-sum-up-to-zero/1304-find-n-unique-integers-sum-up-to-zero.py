class Solution:
    def sumZero(self, n: int) -> List[int]:
        if(n%2==0):
            count=-1*n
            ans=[x for x in range(count+1,n,2)]
        else:
            start=(n//2)*-1
            end=(n//2)
            ans=[x for x in range(start,end+1)]            
        return ans