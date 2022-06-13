// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	bool istrue(string par,string s){
       if(par.size()%s.size()!=0)return false;
       string str=s+s;
       while(str.size()<par.size()){
           str.append(s);
       }
        if(par==str)return true;
        return false;
	
}  	
	int isRepeat(string s)
	{
	    // Your code goes here
	    int n=s.size();
        for(int i=n/2;i>=1;i--)
        {
            if(istrue(s,s.substr(0,i)))
            {
                return 1;
            }
        }
    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends