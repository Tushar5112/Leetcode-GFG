// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dp[i][j]==-1){
                    ans=max(ans,dfs(i,j,n,m,matrix,dp));
                }
            }
        }
        return ans;
    }
    int dfs(int i,int j,int n,int m,vector<vector<int>> &matrix,vector<vector<int>> &dp){
        if(i>=n || j>=m || i<0 || j<0){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int path=1;
        int dr[4][2]={ {1,0}, {-1,0}, {0,-1}, {0,1} };
        
        for(int k=0;k<4;k++){
            int nbri=i+dr[k][0];
            int nbrj=j+dr[k][1];
            
            if(nbri<n && nbrj<m && nbri>=0 && nbrj>=0 && matrix[nbri][nbrj]>matrix[i][j]){
                path=max(path,dfs(nbri,nbrj,n,m,matrix,dp)+1);
            }
        }
        return dp[i][j]=path;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends