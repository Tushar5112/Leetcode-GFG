class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> data;
        for(int i = 0; i < arr.size(); i++){
            if(data.find(arr[i]*2) != data.end() || (arr[i]%2 == 0 && data.find(arr[i]/2) != data.end()))
                return true;
            else
                data.insert(arr[i]);
        }
        return false;
    }
};