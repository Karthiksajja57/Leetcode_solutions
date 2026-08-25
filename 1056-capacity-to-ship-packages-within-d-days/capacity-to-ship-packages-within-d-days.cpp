class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0LL);

        while (low <= high) {
            long long cap = low + (high - low) / 2;

            long long load = 0;
            int d = 1;

            for (int i = 0; i < weights.size(); i++) {
                if (load + weights[i] <= cap) {
                    load += weights[i];
                }
                else {
                    load = weights[i];
                    d++;
                }

                if (d > days)
                    break;
            }

            if (d <= days)
                high = cap - 1;
            else
                low = cap + 1;
        }

        return (int)low;
    }
};