class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;
        for (int i=31; i > -1; --i) {
            a = a | ((1 & (n >> i)) << 31-i);
        }
        return a;
    }
};
