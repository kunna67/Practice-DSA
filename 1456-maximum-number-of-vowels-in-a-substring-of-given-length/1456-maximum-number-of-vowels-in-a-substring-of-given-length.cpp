class Solution {
    bool isVowel(char c){
        return c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u';
    }
public:
    int maxVowels(string s, int k) {
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.size(); i++){
            if (i >= k){
                cnt -= isVowel(s[i - k]);
            }
            cnt += isVowel(s[i]);
            ans = max (ans, cnt);
        }
        return ans;
    }
};