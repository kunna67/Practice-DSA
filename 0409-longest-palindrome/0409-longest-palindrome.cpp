class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        unordered_map<int,int>mp;
        for(char x:s){
            mp[x]++;
        }
        int n=s.size();
        for(auto x:mp){
            if(x.second>1){
                count+=x.second-(x.second%2);
            }
        }
        if(count<n) count+=1;
        return count;

    }
};
