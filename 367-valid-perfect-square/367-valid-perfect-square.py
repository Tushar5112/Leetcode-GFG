import math
class Solution:
    def isPerfectSquare(self, n: int) -> bool:
        if (math.ceil(math.sqrt(n)) == math.floor(math.sqrt(n))):
            return True
        else:
            return False