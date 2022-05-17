class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v={0};
        for(int i=0;i<gain.size();i++){
            int alt = v.at(i)+gain.at(i);
            v.push_back(alt);
        }
        return *max_element(v.begin(),v.end());
    }
};