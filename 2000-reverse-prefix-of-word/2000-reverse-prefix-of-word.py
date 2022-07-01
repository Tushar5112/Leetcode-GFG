class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if(ch in word):
            idx=word.index(ch)
            suffix=word[idx+1:]
            prefix=word[:idx+1]
            return(prefix[::-1]+suffix)
        return(word)