class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end()); 
        reverse(b.begin(), b.end()); 
        string sum;
        bool carry = false;
        for (int i = 0; i < min(a.length(), b.length()); ++i) {
            if (a[i] == '1' && b[i] == '1') {
                if (carry) {
                    sum = '1' + sum ;
                }
                else {
                    sum = '0' + sum ;
                    carry = true;
                }
            }
            else if (a[i] == '1' || b[i] == '1') {
                if (carry) {
                    sum = '0' + sum ;
                }
                else {
                    sum = '1' + sum ;
                    carry = false;
                }
            }
            else {
                if (carry == 1) {
                    sum = '1' + sum ;
                }
                else {
                    sum = '0' + sum ;
                }
                carry = false;
            }
        }

        if (a.length() > b.length()) {
            for (int i = b.length(); i< a.length(); ++i) {
                if (a[i] == '1') {
                    if (carry) {
                        sum = '0' + sum ;
                    }
                    else {
                        sum = '1' + sum ;
                        carry = false;
                    }
                }
                else {
                    if (carry) {
                        sum = '1' + sum ;
                        carry = false;
                    }
                    else {
                        sum = '0' + sum ;
                    }
                }
            } 
        }
        else if (b.length() > a.length()) {
            for (int i = a.length(); i< b.length(); ++i) {
                if (b[i] == '1') {
                    if (carry) {
                        sum = '0' + sum ;
                    }
                    else {
                        sum = '1' + sum ;
                        carry = false;
                    }
                }
                else {
                    if (carry) {
                        sum = '1' + sum ;
                        carry = false;
                    }
                    else {
                        sum = '0' + sum ;
                    }
                }
            } 
        }
 
        if (carry) {
            sum = '1' + sum ;
        }

        return sum;

    }
};
