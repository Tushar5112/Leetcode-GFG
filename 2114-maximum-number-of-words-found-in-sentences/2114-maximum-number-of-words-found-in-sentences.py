class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        a=[]
        for i in sentences:
            count=0
            for j in i:
                if(j==" "):
                    count+=1
            count+=1
            a.append(count)
        return (max(a))
            