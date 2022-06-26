// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        unordered_set<int> s;
       for(long long i=0;i<n;i++) s.insert(arr[i]);
       int ans=0;
       long long start=0;
       unordered_map<long long,long long> mp; 
       for(long long i=0;i<n;i++){
           mp[arr[i]]++;
           while(mp.size()==s.size()){
               ans+=(n-i);
               mp[arr[start]]--;
               if(mp[arr[start]]==0){mp.erase(arr[start]);}
               start++;
           }
       }
       return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends