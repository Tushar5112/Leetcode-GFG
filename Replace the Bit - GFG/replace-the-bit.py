#User function Template for python3
import math
class Solution:
    def replaceBit(self, N, K):
        length=int(math.log(n,2))+1
        if(K>length):
            return N
        return(~(~N|(1<<(length-K))))


"""int len=log2(n)+1;
        if(k>len)return n;
        return ~(~n|(1<<(len-k)));
"""
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n,k = input().strip().split(" ")
        n,k = int(n), int(k)
        ob = Solution()
        ans = ob.replaceBit(n,k)
        print(ans)
# } Driver Code Ends