class Solution {
public:
    int mySqrt(int x) {

        if (x == 0 || x == 1) {
            return x;
        }
        int upper = x ;
        int lower = 1;
        int mid = 0;
        int ans = 0;
        while (upper >= lower) {
            mid = lower + (upper  - lower) /2;
            if (x/mid == mid) {
                return mid;
            }
            else if (x/mid < mid) {
                upper = mid - 1;
            }
            else {
                lower = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};
