class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = [start + 2 * i for i in range(n)]
        xor = 0
        for i in range(len(nums)):
            xor ^= nums[i]
        return xor