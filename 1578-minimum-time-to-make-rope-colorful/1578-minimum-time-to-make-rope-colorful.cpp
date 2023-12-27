class Solution {
public:
    int minCost(string s, vector<int>& a) {
        int n = s.length(), ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                int j = i, maxi = a[i], sum = 0;
                while (j < n && s[i] == s[j]) sum += a[j], maxi = max(maxi, a[j]), ++j;
                ans += (sum - maxi); 
                i = j-1;
            }
        }
        return ans;
    }
};
