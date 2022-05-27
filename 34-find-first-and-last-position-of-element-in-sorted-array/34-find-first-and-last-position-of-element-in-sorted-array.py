class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if target in nums:
            n1=nums.index(target)
            n2=nums[::-1].index(target)
            ans=[n1,len(nums)-n2-1]
            return (ans)
        else:
            return ([-1,-1])