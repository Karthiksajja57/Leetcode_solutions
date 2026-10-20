#include <string>
#include <algorithm>

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        
        // Pre-allocate memory for the maximum possible length to prevent reallocations
        string result = "";
        result.reserve(max(num1.length(), num2.length()) + 1);

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }

            carry = sum / 10;
            
            // push_back is slightly faster than operator+= for single characters
            result.push_back((sum % 10) + '0');
        }

        // Reverse at the end
        reverse(result.begin(), result.end());

        return result;
    }
};