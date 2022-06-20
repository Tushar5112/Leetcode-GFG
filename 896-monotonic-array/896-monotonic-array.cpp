class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int n = nums.size();
        int inc=1,dec=1;

        for(int i=0 ; i<n-1 ; ++i)
        {
            if(nums[i]<=nums[i+1])
                inc++;
            if(nums[i]>=nums[i+1])
                dec++;
        }
        if(inc==n || dec==n)
            return true;
        return false;
    }
};