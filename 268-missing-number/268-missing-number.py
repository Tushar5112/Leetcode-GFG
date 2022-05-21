class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        l=[x for x in range(max(nums)+1)]
        if (l==nums):
            return max(nums)+1
        for i in l:
            if i not in nums:
                return i