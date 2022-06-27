class Solution {
public:
    
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=0,k=n-1;
        while(i<=k){
            if(arr[i]==0){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
            else if(arr[i]==1){
                i++;
            }
            else if(arr[i]==2){
                swap(arr[i],arr[k]);
                k--;
            }
        }
    }
};