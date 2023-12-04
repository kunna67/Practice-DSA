class Solution {
public:
    string shortestCompletingWord(string str, vector<string>& words) 
    {
        unordered_map<char,int>mp1;
        for(int i=0;i<str.length();i++)
        {
            char ch = str[i];
            if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
            {
            char temp = char(tolower(ch));
            mp1[temp]++;	
            }	
        }        
        string ans = "";
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            unordered_map<char,int>mp2;
            
            for(int j=0;j<s.length();j++)
            {
                char ch = s[j];
                if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
                {
                char temp = char(tolower(ch));
                mp2[temp]++;	
                }	
            }
            bool flag=true;  //asuming it to be a completeing word
            
            for(auto it = mp1.begin() ; it!=mp1.end() ; it++)
            {
                char ch = it->first;
                int freq = it -> second;
                
                if(mp2.find(ch)==mp2.end())
                {
                flag=false;
                break;
                    
                }
                if(mp2.find(ch)!=mp2.end() and mp2[ch]<freq)
                {
                    flag=false;
                    break;
                }
            }
            
            if(flag==true)
            {
                if(ans.length()==0)
                {
                    ans = s;
                }
                else if(ans.length()>0 and s.length()<ans.length())
                {
                    ans = s;
                }
            }
        }
        return ans;
    }
};