class Solution:
    def maxSubArray(self, arr: List[int]) -> int:
        maxSum=arr[0]
        sum=0
        for i in range(len(arr)):
            sum+=arr[i]
            maxSum=max(maxSum,sum)
            if(sum<0):
                sum=0
        return maxSum
 
        