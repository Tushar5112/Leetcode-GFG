class Solution:
    def countSubstrings(self, s: str) -> int:
        res = 0
    
        for i in range(len(s)):
            for l,r in ((i,i), (i, i + 1)):
                while l >= 0 and r < len(s):
                    if s[l] == s[r]:
                        res += 1
                        l, r = l - 1, r + 1
                    else:
                        break
        return res