#User function Template for python3
import datetime
class Solution:
    def getDayOfWeek(self, d, m, y):
        # code here 
        weekday=['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
        ans=datetime.date(y,m,d).weekday()
        return(weekday[ans])

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        d,m,y=map(int,input().split())
        
        ob = Solution()
        print(ob.getDayOfWeek(d,m,y))
# } Driver Code Ends