class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set2(nums2.begin(), nums2.end());
    // unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> ans;
        for(int x : nums1) {
            if(set2.count(x)){
                ans.push_back(x);
                set2.erase(x);
            }
        }
        return ans;
    }
};