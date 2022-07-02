class Solution:
    def hammingWeight(self, n: int) -> int:
        binary=str(bin(n))
        return(binary.count('1'))