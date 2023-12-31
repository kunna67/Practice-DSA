//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        int s=0;
        for(int i=0;i<N;i++){
            s+=coins[i];
        }
        vector<int>dp(s+1,0);
        dp[0]=1;
        for(int i=0;i<N;i++){
            for(int j=s;j>=0;j--){
                if(j-coins[i]>=0){
                    dp[j]=dp[j] | dp[j-coins[i]];
                }
            }
        }
        for(int i=1;i<=s;i++){
            if(i%20==0 || i%24==0 || i==2024){
                if(dp[i]) return 1;
            }
        }
        return 0;
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends