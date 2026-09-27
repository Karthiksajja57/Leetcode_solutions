class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int a = 0;

        for(int i = 0; i < operations.size(); i++){

            if(operations[i] == "D"){
                a = ans[ans.size() - 1] * 2;
                ans.push_back(a);
            }

            else if(operations[i] == "C"){
                ans.pop_back();
            }

            else if(operations[i] == "+"){
                a = ans[ans.size() - 1] + ans[ans.size() - 2];
                ans.push_back(a);
            }

            else{
                ans.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;

        for(int x : ans){
            sum += x;
        }

        return sum;
    }
};