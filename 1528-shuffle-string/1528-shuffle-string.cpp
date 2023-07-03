class Solution {
public:
    string restoreString(string s, vector<int>& indices) { 
        vector<pair<int,char>>num;
        string str;
        str.resize(s.size());
        for(int i=0;i<indices.size();i++){
            num.push_back(make_pair(indices[i],s[i]));
        }
        sort(num.begin(),num.end());
        for(int i=0;i<indices.size();i++){
            str[i]=num[i].second;
        }
        return str;
        
    }
};