class Solution {
public:
    int dp[100];
    int dp1[100];

    int climbStairs(int n) {
        if (n <= 0) return n == 0;
        if (dp1[n] == 1) return dp[n];

        dp1[n] = 1;
        return dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};