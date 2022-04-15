// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int n = nums.size();
      int *dp = new int[n];
      
      dp[n-1] = 0;
      
      for(int i = n-2 ; i >= 0 ; i--)
      {
          int currlen = -1;
          int cost = 0;
          dp[i] = INT_MAX;
          for(int j = i ; j < n ; j++)
          {
              currlen += nums[j] + 1;
              if(currlen>k)
                   break;
              if(j == n-1)
                   cost = 0;
              else
                   cost = (k-currlen)*(k-currlen) + dp[j+1];
              dp[i]=min(dp[i],cost);
          }
      }
      return dp[0];
    } 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends