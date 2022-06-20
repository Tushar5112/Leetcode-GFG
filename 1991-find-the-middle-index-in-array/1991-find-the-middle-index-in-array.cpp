class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum=0,left_sum=0;
        for(int i:nums)
        {
            total_sum+=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            total_sum-=nums[i];
            if(left_sum==total_sum)
            {
                return i;\
                //index
            }
            left_sum+=nums[i];
        }
        return -1;
        //element not found
    }
};
// the idea is to get the total sum of nums first
// then iterate over nums and simultaneously modify left sum
// right sum can be found by sub the element sequentially