class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),1); 
        v[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--) {
            v[i]=nums[i+1]*v[i+1];
        }
        int leftProd=1;
        for(int i=0;i<nums.size();i++) {
            v[i]=leftProd*v[i];
            leftProd=leftProd*nums[i];
        }
        return v;
    }
};