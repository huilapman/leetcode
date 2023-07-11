class Solution {
public:
    double myPow(double x, int n) {
        double ans = x;
        int idx = n;
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            idx = (n == INT_MIN)? (n+1) * -1 : n * -1;
        }
        if (idx > 1) {
            ans = myPow(x, idx/2);
            ans = (idx % 2 == 0)? ans * ans : ans * ans * x;
        }
        if (n < 0) {
            ans = 1 / ans;
            if (n == INT_MIN) {
                ans = ans / x;
            }
        }
        return ans;
    }
};
