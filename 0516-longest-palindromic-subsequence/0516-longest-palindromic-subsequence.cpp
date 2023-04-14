class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=(int)s.size();
  vector<vector<int>> dp(n+1,vector<int>(n+1,0));

  for(int i=0;i<n;i++){
    dp[i][i]=1;
  }
  for(int d=2;d<=n;d++){
    for(int i=0;i<n-d+1;i++){
      int j=i+d-1;
      if(s[i]==s[j]&&d==2)
      dp[i][j]=2;
      else if(s[i]==s[j])
      dp[i][j]=dp[i+1][j-1]+2;
      else
      dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
    }
  }
  return dp[0][n-1];
    }
};