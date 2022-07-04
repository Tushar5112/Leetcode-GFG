class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        n1=len(s)
        n2=len(t)
        if (n1!=n2):
            return(False)
        return(sorted(s)==sorted(t))