// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
    bool brainGame(vector<int>nums) {
        // Code here
        vector<int> v(1005);
        for(int i=2;i<=1000;i++) {
            for(int j=2*i;j<=1000;j+=i) {
                v[j]=max(v[j],1+v[i]);
            }
        }
        int x=0;
        for(int i=0;i<nums.size();i++) {
            x^=v[nums[i]];
        }
        if(x==0) {
            return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends