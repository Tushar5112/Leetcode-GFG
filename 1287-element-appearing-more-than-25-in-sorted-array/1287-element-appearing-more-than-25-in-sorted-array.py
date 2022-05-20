class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        check=len(arr)//4
        for i in set(arr):
            if arr.count(i) > check:
                return i