class Solution {
public:
    void pushToStack(stack<string> &s, string &path, string &temp, int &pos, int &i) {
        temp = path.substr(pos+1, i-pos-1);

        if (temp == "..") {
            if (!s.empty()) {
                s.pop();
            }
        }
        else if (temp.length() != 0 && temp != ".") {
            s.push(temp);
        }
    }

    string simplifyPath(string path) {
        int n = path.length();
        string _path = "";

        if (n == 0) {
            return "";
        }
        else {
            stack<string> s;
            int pos = 0;
            string temp;
            for (int i=1; i<n; ++i) {
                if (path[i] == '/') {
                    pushToStack(s, path, temp, pos, i);
                    pos = i;
                }
            }
            if (pos < n-1) {
                pushToStack(s, path, temp, pos, n);
            }

            if (s.size() == 0) {
                _path = "/";
            }
            else {
                while (!s.empty()) {
                    _path = "/" + s.top() + _path;
                    s.pop();
                }
            }
        }
        
        return _path;
    }
};
