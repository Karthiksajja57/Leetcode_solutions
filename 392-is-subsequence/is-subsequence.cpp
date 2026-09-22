class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int j = 0;

        for(int i = 0; i < s.size(); i++) {

            bool found = false;

            while(j < t.size()) {

                if(s[i] == t[j]) {
                    count++;
                    j++;          
                    found = true;
                    break;
                }

                j++;
            }

            if(!found) {
                return false;
            }
        }

        return count == s.size();
    }
};