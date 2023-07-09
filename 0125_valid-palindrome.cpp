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

        for (int i = 0; i < n; ++i) {
            if (isalnum(s[i])) {
               while (!isalnum(s[j])) {
                   --j;
               }
               if (tolower(s[i]) == tolower(s[j])) {
                   --j;
               }
               else {
                   return false;
               }
            } 
        }
        return true;
    }
};
