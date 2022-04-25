#{ 
#Driver Code Starts
#Initial Template for Python 3


 # } Driver Code Ends
#User function Template for python3

class Solution:
    def evenOdd(self,n,arr):
        #code here
        even=odd=0
        for i in arr:
            if(i%2==0):
                even+=1
            else:
                odd+=1
        l=[]
        l.append(int((even*(even-1)/2)+(odd*(odd-1)/2)));
        l.append(even*odd)
        return l

#{ 
#Driver Code Starts.
if __name__=="__main__":
    for i in range(int(input())):
        n=int(input())
        arr=list(map(int,input().strip().split()))
        obj=Solution()
        ans=(obj.evenOdd(n,arr))
        print(ans[0],ans[1])
#} Driver Code Ends