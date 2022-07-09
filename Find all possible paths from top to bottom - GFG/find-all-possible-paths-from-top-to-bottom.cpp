// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool is_valid(int i,int j,int n,int m,vector<vector<int>>&visited,vector<vector<int>>&a)
{
   if(i<0||i>=n||j<0||j>=m||visited[i][j]||a[i][j]==0)
   return false;
   return true;
}
void find(int i,int j,int n,int m,vector<vector<int>>&a,vector<vector<int>>&visited,vector<int>temp,vector<vector<int>>&v)
{
   if(i<0||i>=n||j<0||j>=m||a[i][j]==0)
   return;
   if(i==n-1&&j==m-1)
   {
       v.push_back(temp);
       return;
   }
   visited[i][j]=1;
  // temp.push_back(a[i][j]);
   if(is_valid(i+1,j,n,m,visited,a))
   {
       temp.push_back(a[i+1][j]);
       find(i+1,j,n,m,a,visited,temp,v);
       temp.pop_back();
   }
   if(is_valid(i,j+1,n,m,visited,a))
   {
       temp.push_back(a[i][j+1]);
       find(i,j+1,n,m,a,visited,temp,v);
       temp.pop_back();
   }
   visited[i][j]=0;
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &a)
    {
        // code here
       vector<int>temp;
       vector<vector<int>>v;
       temp.push_back(a[0][0]);
       vector<vector<int>>visited(n,vector<int>(m,0));
       
       find(0,0,n,m,a,visited,temp,v);
       return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends