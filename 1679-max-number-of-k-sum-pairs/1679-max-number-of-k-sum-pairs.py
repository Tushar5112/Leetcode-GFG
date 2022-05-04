class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        snums = sorted(nums)
        l,r = 0, len(nums)-1
        count = 0
        while l<r:
            if snums[l]+snums[r]==k:
                count += 1
                l += 1
                r -= 1
            elif snums[l]+snums[r]>k:
                r -= 1
            else:
                l += 1
        return count