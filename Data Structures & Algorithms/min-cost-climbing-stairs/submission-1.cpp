class Solution {
public:
    int solve(int n, vector<int>& cost, vector<int>& dp) {

        if(n <= 1) {
            return 0;
        }

        if(dp[n] != -1) {
            return dp[n];
        }

        dp[n] = min(
            solve(n - 1, cost, dp) + cost[n - 1],
            solve(n - 2, cost, dp) + cost[n - 2]
        );

        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {

        vector<int> dp(cost.size() + 1, -1);

        return solve(cost.size(), cost, dp);
    }
};