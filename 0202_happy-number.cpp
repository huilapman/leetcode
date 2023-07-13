class Solution {
public:
    int squareDigits(int n) {
        int sum = 0;
        while (n>0) {
            sum = sum + (n%10) * (n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> m;
        while (1) {
            n = squareDigits(n);
            if (n == 1) {
                return true;
            }
            auto it = m.find(n);  
            if ( it != m.end() ) {  
                return false;
            }   
            else {
                m.insert(n);
            }
        }
        
    }
};
