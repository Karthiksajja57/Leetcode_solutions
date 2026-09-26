class Solution {
public:
bool isvowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        for(int i : s){
            freq[i]++;
        }
        int maxVowel = 0, maxConsonant = 0;
        for (auto i : freq) {
            if (isvowel(i.first)) {
                maxVowel = max(maxVowel, i.second);
            }
            else {
                maxConsonant = max(maxConsonant, i.second);
            }
        }
        return maxVowel + maxConsonant;

    }
};