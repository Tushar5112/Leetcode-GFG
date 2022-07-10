class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        res = []
        mx = -1
        for e in arr[::-1]:
            res.append(mx)
            mx = max(mx, e)
        return res[::-1]