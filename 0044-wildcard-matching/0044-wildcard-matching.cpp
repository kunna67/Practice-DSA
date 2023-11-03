// Approach 1 : memoziation+recursion
class Solution {
public:
    int solve(int i ,int j ,string &s1, string &s2, vector<vector<int>> &dp)
    {

        if(i < 0 || j < 0)
        {
            while(j >= 0 && s2[j] == '*')
                j-- ;
            if(i < 0 && j < 0)
               return true  ;
            else
              return false ;
        }

        if(dp[i][j] != -1)
           return dp[i][j] ;
        
        if(s1[i] == s2[j] || s2[j] == '?')
           return dp[i][j] = solve(i-1,j-1,s1,s2,dp)  ;

        else if(s2[j] == '*')
        {
            for(int k = 0 ; k <= i + 1  ;k++)
               if(solve(i-k,j-1,s1,s2,dp))
                   return dp[i][j] = true ;
        }
        return dp[i][j] = false ;
 
    }
    bool isMatch(string s, string p) 
    {
        int n = s.size() ;
        int m = p.size() ;
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1)) ;

        return solve(n-1,m-1,s,p,dp) ;
    }
};
// Approach 2: tabulation
// class Solution {
// public:
//     bool isMatch(string s, string p) 
//     {
//         int n = s.size() ;
//         int m = p.size() ;
//         vector<vector<int>> dp(n+1,vector<int> (m+1,0)) ;
//         dp[0][0] = 1 ;

//         int k = 1 ;
//         while(k <= m && p[k-1] == '*')
//             dp[0][k++] = 1 ;

//         for(int i = 1 ; i <= n ; i++)
//             for(int j = 1 ; j <= m ; j++)
//             {
//                 if(s[i-1] == p[j-1] || p[j-1] == '?')
//                     dp[i][j] = dp[i-1][j-1]   ;

//                 else if(p[j-1] == '*')
//                     for(int k = 0 ; k <= i ;k++)
//                        if(dp[i-k][j-1])
//                        {
//                            dp[i][j] = 1;
//                            break ;
//                        }
//             }

//         return dp[n][m] ;
//     }
// };