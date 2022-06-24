// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void solve(int n, vector<int>&v){
   if(n<=0)
      {
          v.push_back(n);
          return;
      }
      
      v.push_back(n);
      solve(n-5,v);
      v.push_back(n);
    }

    vector<int>pattern(int N){
        // code here
        vector<int>ans;
        solve(N,ans);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends