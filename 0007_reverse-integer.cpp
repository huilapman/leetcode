class Solution {
public:
    int reverse(int x) {
        int result = 0, a = x, y;
        if (x == INT_MIN) {
            return 0;
        }
        if (a < 0) {
            a *= -1;
        } 

        while (a > 9) {
            y = a % 10;
            a /= 10;
            result = result * 10 + y;
        }

        if (result > INT_MAX/10) {
            return 0;
        }
        else {
            result = result * 10 + a;
        }
        
        if (x<0) {
            result *= -1;
        }

        return result;
    }
};
