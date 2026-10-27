class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = n;
        long long coins_needed = 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            coins_needed = mid * (mid + 1) / 2;
            if(coins_needed == n){
                return mid;
            }
            else if(coins_needed < n){
                low = mid + 1;

            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }
};