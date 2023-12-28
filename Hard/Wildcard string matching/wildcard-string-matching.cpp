//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
        // code here
        int n=wild.length();
        int m=pattern.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(wild[i-1]==pattern[j-1] or wild[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }else if(wild[i-1]=='*'){
                    dp[i][j]=dp[i][j-1]||dp[i-1][j-1];
                }
                
            }
        }
        return dp[n][m];
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends