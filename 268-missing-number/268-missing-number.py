class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        l=[x for x in range(nums[-1]+1)]
        if (l==nums):
            return nums[-1]+1
        for i in l:
            if i not in nums:
                return i