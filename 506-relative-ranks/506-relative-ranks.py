class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        ans=[]
        temp=sorted(score,reverse=True)
        for i in score:
            if(temp.index(i)==0):
                ans.append("Gold Medal")
            elif(temp.index(i)==1):
                ans.append("Silver Medal")
            elif(temp.index(i)==2):
                ans.append("Bronze Medal")
            else:
                ans.append(str(temp.index(i)+1))
        return ans