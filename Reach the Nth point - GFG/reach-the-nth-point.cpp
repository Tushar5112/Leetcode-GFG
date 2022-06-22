// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    long long int m = 1000000007;
		    vector<int> v={1,1};
		    for(int i=2;i<=n;i++)
		    {
		        v.push_back((v[i-1]+v[i-2])%m);
		    }
		    return(v[n]);
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends