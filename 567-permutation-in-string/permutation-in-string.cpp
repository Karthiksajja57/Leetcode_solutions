class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length())
            return false;

        int freq1[26] = {};
        int freq2[26] = {};

        // Frequency of s1
        for (char c : s1)
            freq1[c - 'a']++;

        int k = s1.length();

        // First window
        for (int i = 0; i < k; i++)
            freq2[s2[i] - 'a']++;

        // Check first window
        if (equal(begin(freq1), end(freq1), begin(freq2)))
            return true;

        // Slide window
        for (int i = k; i < s2.length(); i++) {

            // Add new character
            freq2[s2[i] - 'a']++;

            // Remove old character
            freq2[s2[i - k] - 'a']--;

            // Check frequencies
            if (equal(begin(freq1), end(freq1), begin(freq2)))
                return true;
        }

        return false;
    }
};