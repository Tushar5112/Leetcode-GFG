// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    vector<int>v;
    sort(a,a+n);
    int i=0,k=0,j=n-1;
    while(i<n){
        if(i%2==0){
            v.push_back(a[j]);
            j--;
        }
        else{
            v.push_back(a[k]);
            k++;
        }
        i++;
    }
    if(n==1)return v;
    
    if(v[0]==v[1]){
        vector<int>ans;
        ans.push_back(-1);
        return ans;
    }
    return v;
}
