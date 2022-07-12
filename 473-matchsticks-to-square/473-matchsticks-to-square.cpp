class Solution {
    private:
    int possible;
public:
    
    bool makesquare(vector<int>& matchsticks) {
int sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
         sort(matchsticks.begin(),matchsticks.end(),greater<int>());
     if(matchsticks.size()<4)
         return false;
        if(sum%4!=0)
            return false;
        possible=sum/4;
        int arr[4]={0,0,0,0};
       return fun(matchsticks,arr,0);
    }
    bool fun(vector<int>& matchsticks,int *arr,int index)
    { 
        if(index==matchsticks.size())
         if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]==arr[3]))
             return true;
        else 
            return false;
        else
        {
            for(int i=0;i<4;i++)
            { arr[i]+=matchsticks[index];
                if(arr[i]<=possible)
                {
                    if(fun(matchsticks,arr,index+1))
                        return true;
                }
             arr[i]-=matchsticks[index];
                
            }
            return false;
        }            
    }
};