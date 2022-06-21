class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        x=0
        for i in range(len(t)):
            if(x<len(s)):
                if(s[x]==t[i]):
                    x+=1
        return(x==len(s))
        