class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        mod = int(1e9 + 7)
        horizontalCuts.sort()
        verticalCuts.sort()
        horizontalCuts.append(h)
        verticalCuts.append(w)
        mh = horizontalCuts[0]
        mv = verticalCuts[0]
        for i in range(len(horizontalCuts) - 1):
            mh = max(mh, horizontalCuts[i+1] - horizontalCuts[i]) 
        for i in range(len(verticalCuts) - 1):
            mv = max(mv, verticalCuts[i+1] - verticalCuts[i])
        return (mh*mv)%mod