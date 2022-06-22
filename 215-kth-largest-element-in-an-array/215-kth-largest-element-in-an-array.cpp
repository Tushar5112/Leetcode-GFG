class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,less<int>> pq;
        for(int i: nums)
        {
            pq.push(i);
        }
        int ans,j=1;
        while(!pq.empty())
        {
            if(j==k)
            {
                ans=pq.top();
                break;
            }
            j++;
            pq.pop();
        }
        return ans;
    }
};