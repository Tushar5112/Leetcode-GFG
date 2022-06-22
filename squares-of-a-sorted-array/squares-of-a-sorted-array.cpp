#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums.at(i)*nums.at(i));
        }
        sort(v.begin(),v.end());
        return v;
    }
};