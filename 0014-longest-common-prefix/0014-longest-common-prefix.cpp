class Solution{
public:
    string longestCommonPrefix(vector<string>& str)
    {
        sort(str.begin(),str.end());
        string ans="";
        for(int i=0;i<str[0].length();i++){
            if(str[0][i]!=str[str.size()-1][i])
                break;
            ans+=str[0][i];
        }
        return ans;
    }
};

// First sort the array and then create a new empty string to store the common prefixes and max iterations=length of the first string and check the characters of the first and last string and concatinate if the characters are matching