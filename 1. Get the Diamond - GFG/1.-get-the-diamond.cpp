// { Driver Code Starts
//Initial Template for C++
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    long long findJumps(long long N,long long K)
    {
        long step=0;
        if(N<=K)
        {
            return N;
        }
        else
        {
            long p=N/K;
            long q=N%K;
            return(p+q);
        }
       //write your code here
        
    }
};

// { Driver Code Starts.



int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, k;
	    cin >> n >> k;
	    Solution obj;
	    cout << obj.findJumps(n,k) << "\n";

	}

}
  // } Driver Code Ends