class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prev=0;
        int curr;
        for(int i=1;i<prices.size();i++) {
            curr=prev+max(prices[i]-prices[i-1],0);
            prev=curr;
        }
        return prev;
    }
};