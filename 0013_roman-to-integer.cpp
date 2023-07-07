class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for (int i=0; i< s.length(); ++i) {
            switch (s[i]) {
                case 'I': 
                    result += 1; 
                    break;
                case 'V': 
                    if (i> 0 && s[i-1] == 'I')
                        result -= 2;
                    result += 5; 
                    break;
                case 'X':
                    if (i> 0 && s[i-1] == 'I')
                        result -= 2;
                    result += 10; 
                    break;
                case 'L': 
                    if (i> 0 && s[i-1] == 'X')
                        result -= 20;
                    result += 50; 
                    break;
                case 'C':
                    if (i> 0 && s[i-1] == 'X')
                        result -= 20;
                    result += 100; 
                    break;
                case 'D':
                    if (i> 0 && s[i-1] == 'C')
                        result -= 200;
                    result += 500; 
                    break;
                case 'M': 
                    if (i> 0 && s[i-1] == 'C')
                        result -= 200;
                    result += 1000; 
                    break;
            }
        }
        return result;
    }
};
