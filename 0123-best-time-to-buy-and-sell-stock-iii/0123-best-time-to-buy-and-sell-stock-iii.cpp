class Solution {
public:
    int dfs(int i,int j,int k,vector<int>& prices,vector<vector<vector<int>>> &dp){
        int n = prices.size();
        if(i == n) return 0;
        int ans = 0;
        if(k == 2) return 0;
        if(dp[i][j][k] != -1) return dp[i][j][k];
        if(j == 0){
            ans = max(dfs(i+1,1,k,prices,dp)-prices[i],dfs(i+1,0,k,prices,dp));
        }
        else{
            ans = max(dfs(i+1,0,k+1,prices,dp)+prices[i],dfs(i+1,1,k,prices,dp));
        }
        return dp[i][j][k] = ans;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return dfs(0,0,0,prices,dp);
    }
};