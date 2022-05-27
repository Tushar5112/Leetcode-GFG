class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        letters.sort()
        #char=[chr(x) for x in range(97,123)]
        ans=''
        for i in letters:
            if (i>target):
                return i
        return letters[0]
                