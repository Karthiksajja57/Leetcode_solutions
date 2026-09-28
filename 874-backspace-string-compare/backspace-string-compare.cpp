class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                if(!st.empty()){
                st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans1 = "";
        while(!st.empty()){
            ans1 += st.top();
            st.pop();
        }
        reverse(ans1.begin(), ans1.end());

        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#'){
                if(!st.empty()){
                st.pop();
                }
            }
            else{
                st.push(t[i]);
            }
        }
        string ans2 = "";
        while(!st.empty()){
            ans2 += st.top();
            st.pop();
        }
        reverse(ans2.begin(), ans2.end());

        return ans1 == ans2;
    }
};