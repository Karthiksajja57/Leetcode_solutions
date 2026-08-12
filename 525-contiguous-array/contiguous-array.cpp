class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();

        vector<int> first(2 * n + 1, -2);

        int sum = n;
        int ans = 0;

        first[sum] = -1;

        for (int i = 0; i < n; i++) {
            sum += (nums[i] == 0 ? -1 : 1);

            if (first[sum] != -2) {
                ans = max(ans, i - first[sum]);
            } else {
                first[sum] = i;
            }
        }

        return ans;
    }
};