class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        if(len(nums)<2):
            return 0
        maximum=max(nums)
        temp=list(nums)
        nums.remove(maximum)
        nums.sort()
        if(maximum>=nums[-1]*2):
            return temp.index(maximum)
        return(-1)