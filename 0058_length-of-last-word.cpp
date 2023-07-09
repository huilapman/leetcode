class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for (int i = s.size()-1; i >= 0; --i) {
            if (s[i] != 32) {
                ++len;
            }
            else {
                if (s[i] == 32 && len > 0) {
                    break;
                }
            }
        }
        return len;
    }
};
