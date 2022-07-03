// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int l=0,r=n-1;
       if(arr[0]==1){
           return 0;
       }
       while(l<=r){
           int mid=(l+r)/2;
           if(arr[mid]==1 && arr[mid-1]!=1){
               return mid;
           }else if(arr[mid]==0){
               l=mid+1;
           }else{
               r=mid-1;
           }
       }
       return -1;
}