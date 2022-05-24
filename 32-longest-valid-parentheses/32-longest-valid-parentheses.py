class Solution:
    def longestValidParentheses(self, s: str) -> int:
        if len(s) == 0 : return 0
        
        stack = [-1]
        res = 0
        
        for i, c in enumerate(s):
            if c == '(':
                stack.append(i)
            else:
                stack.pop()
                if len(stack) == 0:
                    stack.append(i)
                else:
                    res = max(res, i - stack[-1])
        return res