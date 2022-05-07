import math
class Solution:
    def find132pattern(self, nums: List[int]) -> bool:
        if(len(nums)<3):
            return 0
        second_num=-math.inf
        stack=[]
        for i in range(len(nums)-1,-1,-1):
            if(nums[i]<second_num):
                return 1
            while(stack and (stack[-1]<nums[i])):
                second_num=stack[-1]
                stack.pop()
            stack.append(nums[i])
        return 0