#User function Template for python3

class Solution:
    def findTime(self, S1, S2):
        # code here 
        a=[0]
        count=0
        for i in S2:
            a.append(S1.index(i))
        for i in range(1,len(a)):
            count+=(abs(a[i]-a[i-1]))
        return count

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S1=input()
        S2=input()
        
        ob = Solution()
        print(ob.findTime(S1,S2))
# } Driver Code Ends