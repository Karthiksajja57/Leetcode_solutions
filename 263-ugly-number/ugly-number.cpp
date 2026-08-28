class Solution {
public:
    bool isUgly(int n) {
        vector<int> a;
        if(n <= 0){
            return false;
        }
        for(long i = 2; i * i <= n; i++){
            while(n % i == 0){
                a.push_back(i);
                n = n/i;
            }
        }

        if(n > 1)
            a.push_back(n);
        for(int i = 0; i < a.size(); i++){
            if(a[i] != 2 && a[i] != 3 && a[i] != 5)
                return false;
            }
        return true;
    }
    
};