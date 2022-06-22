#User function Template for python3

class Solution:
    def fun(self,s):
        mod=10**9+7
        a=ab=abc=0
        for i in s:
            if(i=='a'):
                a=2*a+1
            elif(i=='b'):
                ab=2*ab+a
            elif(i=='c'):
                abc=2*abc+ab
        return(int(abc%mod))
    # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#Position this line where user code will be pasted.

t=int(input())
for _ in range(t):
    s=input()
    print(Solution().fun(s))
# } Driver Code Ends