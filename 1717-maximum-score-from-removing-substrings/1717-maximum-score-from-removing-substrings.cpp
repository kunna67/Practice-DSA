class Solution {
public:
    int solve(string &s,string target,int c){
        int i=-1;
        int ans=0;
        for(int j=0;j<s.size();j++){
            if(i>=0 && s[i]==target[0] && s[j]==target[1]){
                i--;
                ans+=c;
            }
            else s[++i]=s[j];
        }
        s=s.substr(0,i+1);
        return ans;
    }
    int maximumGain(string s, int x, int y) {
        string ab="ab",ba="ba";
        if(x<y){
            swap(x,y);
            swap(ab,ba);
        }
        return solve(s,ab,x)+solve(s,ba,y);

    }
};