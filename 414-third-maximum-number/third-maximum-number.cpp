class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> set1(nums.begin(), nums.end());

        int n = set1.size();

        if (n < 3) {
            return *set1.rbegin();
        }

        auto it = set1.rbegin();
        advance(it, 2);

        return *it;
    }
};