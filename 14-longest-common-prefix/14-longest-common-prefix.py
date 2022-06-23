class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        lim = min(strs,key=len)
        res = ""
        for i in range(len(lim)):
            if strs[0][i] != strs[len(strs)-1][i]:
                break
            res += strs[0][i]
        return res