class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum=0;
        for(int i:cardPoints){
            total_sum+=i;
        } 
        int c=0,j,i=0,ans=0,sum=0,n=cardPoints.size();
        for(j=0;c<(n-k);j++,c++){
            sum+=cardPoints[j];
        }
        ans=max(ans,total_sum-sum);
        while(j<n){
            sum-=cardPoints[i++];
            sum+=cardPoints[j++];
            ans=max(ans,total_sum-sum);
        }
        return ans;
    }
};