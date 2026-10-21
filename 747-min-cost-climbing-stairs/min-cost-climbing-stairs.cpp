class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev2 = cost[0]; // Cost to reach step 0
        int prev1 = cost[1]; // Cost to reach step 1

        for (int i = 2; i < n; ++i) {
            int current = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = current;
        }

        // The top can be reached from either the last step or the second to last step
        return min(prev1, prev2);
    }
};