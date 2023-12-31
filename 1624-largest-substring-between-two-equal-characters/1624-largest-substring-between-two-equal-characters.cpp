class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi=-1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            for(int j=0;j<s.size();j++){
                if(c==s[j]){
                    maxi=max(maxi,j-i-1);
                }
            }
        }
        return maxi;
    }
};