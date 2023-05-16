class Solution {
public:
    int titleToNumber(string clmT) {
        
        int c=0,res=0;
        for(int i=clmT.length()-1;i>=0;i--){
            res+=(clmT[i]-'A'+1)*pow(26,c);
            c++;
        }
        return res;
    }
};