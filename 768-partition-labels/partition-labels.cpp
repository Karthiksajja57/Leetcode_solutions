class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26] = {};

        // Find last occurrence of every character
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<int> ans;

        int start = 0;
        int end = 0;

        for (int i = 0; i < s.size(); i++) {

            // Extend partition if needed
            end = max(end, last[s[i] - 'a']);

            // Partition can end here
            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};