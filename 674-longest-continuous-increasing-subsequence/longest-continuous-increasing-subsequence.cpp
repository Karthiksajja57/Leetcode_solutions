class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 1,count = 1;
        int ans = 1;
        while (r < n) {
            if (nums[l] < nums[r]) {
                count++;
            } 
            else {
                count = 1;
            }
            ans = max(ans, count);
            l++;
            r++;
        }
        return ans;
    }
};