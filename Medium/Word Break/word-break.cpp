//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int dp[1200];
    bool issame(int index,string &str1,string &str2){
        int remsize=str1.size()-index;
        if(str2.size()>remsize) return 0;
        for(int i=0;i<str2.size();i++){
            if(str2[i]!=str1[index+i]) return 0;
        }
        return 1;
        
    }
    int solve(int index,string &str,vector<string>&d){
        if(index==str.size()) return 1;
        if(dp[index]!=-1) return dp[index];
        int ans=0;
        for(int i=0;i<d.size();i++){
            if(issame(index,str,d[i])){
                ans|=solve(index+d[i].size(),str,d);
            }
        }
        return dp[index]=ans;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        memset(dp,-1,sizeof(dp));
        return solve(0,s,dictionary);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends