class Solution {
int mod=1000000007;
int f[1001][1001] = {};
public:
    int kInversePairs(int n, int K) {
        f[0][0] = 1;
        for (int i = 1; i <= n; ++ i) 
        {
            long long s = 0; 
            for (int j = 0; j <= K; ++ j)
            {
                s += f[i - 1][j];
                if (j >= i)
                    s -= f[i - 1][j - i];
                f[i][j] = ((long long)f[i][j] + s) % mod; 
            }
        }
        return f[n][K];    
    }
};