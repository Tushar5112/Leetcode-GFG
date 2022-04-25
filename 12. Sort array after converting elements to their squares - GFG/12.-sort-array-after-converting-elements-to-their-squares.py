#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3


class Solution:
    def sortSquares(self, arr,n):
        a=[x**2 for x in arr]
        a.sort()
        return a
        #Write your code here

#{ 
#Driver Code Starts.

if __name__=="__main__":
    t=int(input())
    for j in range(t):
        n=int(input())
        a=list(map(int,input().split()))
        s = Solution()
        b = s.sortSquares(a,n)
        for i in b:
            print(i, end = " ")
        print()

#} Driver Code Ends