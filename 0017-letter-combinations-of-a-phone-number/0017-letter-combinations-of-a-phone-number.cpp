class Solution {
    void helper(int i,string& s, string& temp, vector<string> &ans, unordered_map<char,string>&m){
            if(i==s.size()){
            ans.push_back(temp);
                return;
            }
            string str = m[s[i]];
        for(int j=0;j<str.size();++j){
            temp.push_back(str[j]);
            helper(i+1,s,temp,ans,m);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string s) {
        string temp;
        vector<string>ans;
        if(s.size()>0){unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mon";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        helper(0,s,temp,ans,m);
        return ans;
        }
        else 
        return ans;
    }
};