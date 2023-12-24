class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        int ans1 = 0;
        int ans2 = 0;

        string s1 = "1";
        string s2 = "0";

        for(int i=1;i<n;i++)
        {
            s1 += (s1[i-1]=='0') ? '1' : '0';
            s2 += (s2[i-1]=='0') ? '1' : '0';
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                ans1++;
            }
            if(s[i]!=s2[i])
            {
                ans2++;
            }
        }

        return min(ans1,ans2);
    }
};