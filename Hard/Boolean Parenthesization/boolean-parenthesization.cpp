//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
const int mod = 1003;
class Solution{
    int dp[2][210][210];

    bool bitop(char ch) {
        return ch == '&' || ch == '|' || ch == '^';
    }
public:
    int countWays(int N, string S){
        // code here
         memset(dp, 0, sizeof(dp));
        for (int i = 0; i < N; i += 2) {
            dp[1][i][i] = (S[i] == 'T');
            dp[0][i][i] = (S[i] == 'F');
        }

        for (int i = N - 1; i >= 0; i--) {
            for (int j = i; j < N; j++) {
                if (i == j) continue;
                dp[0][i][j] = dp[1][i][j] = 0;
                for (int k = i + 1; k < j; k += 2) {
                    if (bitop(S[k])) {
                        int left_true = dp[1][i][k - 1];
                        int left_false = dp[0][i][k - 1];
                        int right_true = dp[1][k + 1][j];
                        int right_false = dp[0][k + 1][j];
                        if (S[k] == '|') {
                            dp[1][i][j] = (dp[1][i][j] + (left_true * right_true) % mod + (left_true * right_false) % mod + (left_false * right_true) % mod) % mod;
                            dp[0][i][j] = (dp[0][i][j] + (left_false * right_false) % mod) % mod;
                        } else if (S[k] == '&') {
                            dp[1][i][j] = (dp[1][i][j] + (left_true * right_true) % mod) % mod;
                            dp[0][i][j] = (dp[0][i][j] + (left_false * right_false) % mod + (left_false * right_true) % mod + (left_true * right_false) % mod) % mod;
                        } else if (S[k] == '^') {
                            dp[1][i][j] = (dp[1][i][j] + (left_true * right_false) % mod + (left_false * right_true) % mod) % mod;
                            dp[0][i][j] = (dp[0][i][j] + (left_true * right_true) % mod + (left_false * right_false) % mod) % mod;
                        }
                    }
                }
            }
        }

        return dp[1][0][N - 1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends