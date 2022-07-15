// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    bool solve(int a[], int n, int k, vector<bool>& visited, vector<int>& subsetSums, int targetSum, int currSubset, int startInd){
        if(subsetSums[currSubset] == targetSum){
            if(currSubset == k-2){
                return true;
            }
            return solve(a, n, k, visited, subsetSums, targetSum, currSubset+1, 0);
        }
        
        for(int i=startInd; i<n; i++){
            if(visited[i]) continue;
            
            if(subsetSums[currSubset]+a[i] <= targetSum){
                visited[i] = true;
                subsetSums[currSubset] += a[i];
                
                if(solve(a, n, k, visited, subsetSums, targetSum, currSubset, startInd+1)){
                    return true;
                }
                
                visited[i] = false;
                subsetSums[currSubset] -= a[i];
            }
        }
        
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code 
        if(k == 1){
            return true;
        }
        
        if(k > n){
            return false;
        }
        
        int sum = accumulate(a, a+n, 0);
        
        if(sum%k == 0){
            vector<bool> visited(n, false);
            vector<int> subsetSums(k, 0);
            return solve(a, n, k, visited, subsetSums, sum/k, 0, 0);
        }
        else{
            return false;
        }
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
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends