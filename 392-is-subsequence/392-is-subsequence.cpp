class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0;
        for(int i=0;i<t.size() && x<s.size();i++)
        {
            if(s[x]==t[i])
            {
                x++;
            }
        }
        return(x==s.size());
    }
};