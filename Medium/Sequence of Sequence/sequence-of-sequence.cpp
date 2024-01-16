//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[101][101];
    int solve(int last,int m, int n){
        if(n<=0)return 1;
        if(dp[last][n]!=-1)return dp[last][n];
        int ans=0;
        for(int i=max(1,2*last);i<=m;i++){
            ans+=solve(i,m,n-1);
        }
        return dp[last][n]=ans;
    }
    int numberSequence(int m, int n){
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(0,m,n);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends