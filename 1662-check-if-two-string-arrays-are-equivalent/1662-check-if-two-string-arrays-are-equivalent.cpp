class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0,j=0; //outer pointers
        int in_i=0,in_j=0; //internal pointers
        
        while(i<word1.size() && j<word2.size()){
            string s1 = word1[i];
            string s2 = word2[j];
            while(in_i < s1.length() && in_j <s2.length()){
                if(s1[in_i]!=s2[in_j]){
                    return false;
                }
                in_i++;
                in_j++;
            }
             if (in_i == s1.length()) {
                i++;
                in_i = 0;
            }
            if (in_j == s2.length()) {
                j++;
                in_j = 0;
            }
        }
        if(i != word1.size() || j != word2.size()){
            return false;
        }
        return true;
    }
};