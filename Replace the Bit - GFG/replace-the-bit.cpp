// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int replaceBit (int n, int k)
    {
        //code here.
        int len=log2(n)+1;
        if(k>len)return n;
        return ~(~n|(1<<(len-k)));
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}

  // } Driver Code Ends