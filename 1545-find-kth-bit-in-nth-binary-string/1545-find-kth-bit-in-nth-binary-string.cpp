class Solution {
    string invert(string s) {
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            s[i] == '0' ? s[i] = '1' : s[i] = '0';
        }
        string a = "";
        for (int i = n - 1; i >= 0; --i) {
            a.push_back(s[i]);
        }
        return a;
    }

public:
    char findKthBit(int n, int k) {
        string s = "0", s1 = "";
        for (int i = 0; i <= n; ++i) {
            string in = invert(s);
            s1 = s + "1" + in;
            s = s1;
        }
        return s1[k - 1];
    }
};