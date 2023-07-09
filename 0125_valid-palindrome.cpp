class Solution {
public:
    bool isAlphaNumeric(char c) {
        if ((c >= 65 && c <= 90) || (c >=97 && c <= 122) || (c >=48 && c <= 57)) {
            return true;
        }
        return false;
    }
    char toLower(char c) {
        if (c >= 65 && c <= 90) {
            return c + 32;
        }
        return c;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int j = n-1;
        bool result = true;
        for (int i = 0; i < n; ++i) {
            if (isAlphaNumeric(s[i])) {
               while (!isAlphaNumeric(s[j])) {
                   --j;
               }
               if (toLower(s[i]) == toLower(s[j])) {
                   --j;
               }
               else {
                   result = false;
                   break;
               }
            } 
        }
        return result;
    }
};
