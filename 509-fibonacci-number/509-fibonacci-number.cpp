class Solution {
public:
    int fib(int n) {
        vector<int> v={0,1};
        for(int i=2;i<=n;i++)
        {
            v.push_back(v[i-1]+v[i-2]);
        }
        return(v[n]);       
    }
};