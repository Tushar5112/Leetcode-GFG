class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        i=0
        chk=n
        ans=[]
        while(i<n):
            ans.append(nums[i])
            ans.append(nums[chk])
            i+=1
            chk+=1
        return ans