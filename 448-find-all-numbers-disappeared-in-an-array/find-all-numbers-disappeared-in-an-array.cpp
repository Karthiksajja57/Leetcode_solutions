class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Mark the presence of numbers by negating values at corresponding indices
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        vector<int> result;
        // Indices with positive values indicate missing numbers
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};