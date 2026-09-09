class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        
        std::vector<bool> result;
        result.reserve(candies.size()); 
        
        for (int candy : candies) {
            if (candy + extraCandies >= maxCandies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        
        return result;
    }
};