// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1) {
            return n;
        }
        int i=1,left=0,right=0,sum=0;
        for(int j=0;j<n;j++) {
            sum+=a[j];
        }
        while(i<n) {
            left+=a[i-1];
            right=sum-(a[i]+left);
            if(left==right) {
                return(i+1);
            }
            else {
                ++i;
            }
        }
        return(-1);
        // Your code here
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends