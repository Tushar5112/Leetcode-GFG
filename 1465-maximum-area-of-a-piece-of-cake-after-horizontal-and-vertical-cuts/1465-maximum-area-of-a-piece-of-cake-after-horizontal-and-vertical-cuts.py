class Solution {
public:
    int maxdiff(vector<int>v, int length) {
        sort(v.begin(),v.end());
        int max_diff=v[0];
        for(int i=1;i<v.size();i++) {
            max_diff=max(max_diff,v[i]-v[i-1]);
        }
        max_diff=max(max_diff,length-v.back());
        return max_diff;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int mod=1e9+7;
        long max_h=maxdiff(horizontalCuts,h);
        long max_v=maxdiff(verticalCuts,w);
        return((max_h*max_v)%mod);
    }
};