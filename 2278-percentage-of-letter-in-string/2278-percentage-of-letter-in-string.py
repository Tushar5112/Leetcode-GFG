import math
class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        cnt=s.count(letter)
        size=len(s)        
        ans=math.floor(cnt/size*100)
        return ans