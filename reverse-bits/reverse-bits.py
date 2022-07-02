class Solution:
    def reverseBits(self, n: int) -> int:
        n=bin(n)[2:].rjust(32,"0")
        n=n[::-1]
        return(int(n,2))