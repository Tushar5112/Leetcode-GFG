class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum=0,length=ratings.size();
        vector<int> l2r(length,1);
        vector<int> r2l(length,1);
        for(int i=1;i<length;i++) {
            if(ratings[i]>ratings[i-1]) {
                l2r[i]=l2r[i-1]+1;
            }
        }
        for(int i=length-2;i>=0;i--) {
            if(ratings[i]>ratings[i+1]) {
                r2l[i]=r2l[i+1]+1;
            }
        }
        for(int i=0;i<length;i++) {
            sum+=max(l2r[i],r2l[i]);
        }
        return sum;
    }
};