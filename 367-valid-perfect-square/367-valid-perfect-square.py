import math
class Solution:
    def isPerfectSquare(self, n: int) -> bool:
        return(math.ceil(math.sqrt(n)) == math.floor(math.sqrt(n)))