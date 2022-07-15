class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        int sum=0;
        for(int i: nums) {
            mp[i]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++) {
            if(i->second==1) {
                sum+=i->first;
            }
        }
        return sum;
    }
};