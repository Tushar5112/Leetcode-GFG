class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        se=[s.count(i) for i in set(s)]
        return(se.count(se[0])==len(se))