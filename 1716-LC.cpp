class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int mon = 1;
        while (n > 0) {
            for (int day = 0; day < min(n, 7); day++) {
                ans = ans+ mon + day;
            }
            n = n- 7;
            mon++;
        }
    return ans;
    }
};
