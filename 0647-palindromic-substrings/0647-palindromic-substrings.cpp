class Solution {
    int cnt = 0;
    void f(int i, int j, string &s){
        int n = s.length();
        if(i >= n || j >= n) return;
        while(i >= 0 && j < n && s[i] == s[j]){
            cnt++;
            i--, j++;
        }
    }
public:
    int countSubstrings(string s) {
        int n = s.length();
        for(int i = 0;i < n;i++){
            f(i, i, s);
            f(i, i+1, s);
        }
        return cnt;
    }
};