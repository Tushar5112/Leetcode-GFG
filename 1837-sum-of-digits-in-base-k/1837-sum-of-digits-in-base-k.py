import numpy as np
class Solution:
    def sumBase(self, n: int, k: int) -> int:
        s=np.base_repr(n,k)
        ans=0
        for i in s:
            ans+=int(i)
        return ans