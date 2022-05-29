class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        vector <int> v;
        sort(nums.begin(),nums.end());
        int length=nums.size();
        for(int i=0;i<=length/2;i++)
        {
            v.push_back(nums.at(i)+nums.at(length-i-1));
        }
        return *max_element(v.begin(),v.end());
    }
};