class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l1=list(s.split())
        return(len(l1[-1]))
        