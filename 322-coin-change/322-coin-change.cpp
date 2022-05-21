class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> v (amount+1,INT_MAX);
        v[0]=0;
        for(int i=1;i<amount+1;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i>=coins[j])
                {
                    int sub_count=v[i-coins[j]];
                    if(sub_count!=INT_MAX && sub_count+1<v[i])
                    {
                        v[i]=sub_count+1;
                    }
                }
            }
        }
        return v[amount]==INT_MAX? -1: v[amount];
    }
};