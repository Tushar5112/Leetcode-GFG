class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n%2==0) {
            int count=-1*n;
            for(int i=count+1;i<n;i+=2) {
                v.push_back(i);
            }
        }
        else {
            int start=(n/2)*-1,end=n/2;
            for(int i=start;i<end+1;i++) {
                v.push_back(i);
            }
        }
        return v;
    }
};