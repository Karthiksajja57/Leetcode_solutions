class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums)
            freq[x]++;

        // Max heap: {frequency, number}
        priority_queue<pair<int, int>> pq;

        for (auto [num, count] : freq) {
            pq.push({count, num});
        }

        vector<int> ans;

        // Get top k
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};