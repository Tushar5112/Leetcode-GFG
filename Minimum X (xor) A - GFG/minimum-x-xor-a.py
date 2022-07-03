#User function Template for python3

class Solution:
    def minVal(self, a, b):
        #code here
        bit_a = 0
        bit_b = 0
        
        tmp_a = a
        while tmp_a != 0:
            bit_a+=1
            tmp_a = tmp_a & (tmp_a-1)

        tmp_b = b
        while tmp_b != 0:
            bit_b+=1
            tmp_b = tmp_b & (tmp_b-1)
            
        if bit_a == bit_b:
            num = a
        
        elif bit_a > bit_b:
            num = a
            mask = 1
            while bit_a != bit_b:
                if num & mask:
                    num = num^mask
                    bit_a -= 1
                mask = mask<<1
        
        else:
            num = a
            mask = 1
            while bit_a != bit_b:
                if num & mask == 0:
                    num = num^mask
                    bit_a += 1
                mask = mask<<1    
                
        return num

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        a = int(input())
        b = int(input())
        
        ob= Solution()
        print(ob.minVal(a,b))
# } Driver Code Ends