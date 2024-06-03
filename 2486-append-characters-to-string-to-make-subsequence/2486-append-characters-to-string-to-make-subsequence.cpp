class Solution {
public:
    int appendCharacters(string s, string t) {

        int n = s.size();
        int m = t.size();

        int i= 0;
        int j = 0;

        while(i<n && j<m){

            if(s[i]==t[j]) j++;
            i++;
            
        }

        return m - j;
        
    }
};