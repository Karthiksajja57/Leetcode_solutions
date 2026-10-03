#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        // Sort both the children's greed factors and the cookie sizes
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        
        int childPtr = 0;
        int cookiePtr = 0;
        
        // Iterate through both arrays
        while (childPtr < g.size() && cookiePtr < s.size()) {
            // If the current cookie can satisfy the current child
            if (s[cookiePtr] >= g[childPtr]) {
                // Move to the next child
                childPtr++;
            }
            // Always move to the next cookie, whether it was used or too small
            cookiePtr++;
        }
        
        // The index of the child pointer represents the number of content children
        return childPtr;
    }
};