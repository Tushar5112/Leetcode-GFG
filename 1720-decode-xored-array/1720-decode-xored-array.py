class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        ans=[first]
        for i in range(0,len(encoded)):
            ans.append(encoded[i]^ans[i])
        return ans