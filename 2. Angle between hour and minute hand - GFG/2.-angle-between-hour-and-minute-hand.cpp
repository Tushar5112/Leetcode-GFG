// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getAngle(int H , int M) {
        // code here
        float hour=((H*60+M)*0.5);
        float min=(M*6);
        hour=abs(hour-min);
        hour=hour>(360-hour)?360-hour:hour;
        int ans=floor(hour);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}  // } Driver Code Ends