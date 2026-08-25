class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& nums, vector<bool>& used) {
        // Complete permutation
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            // Skip already used element
            if (used[i])
                continue;

            // Choose
            used[i] = true;
            temp.push_back(nums[i]);

            // Recursion
            solve(nums, used);

            // Backtrack
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);

        solve(nums, used);

        return ans;
    }
};