class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) 
    {
        int mod = 1e9+7;     
        vector<int> dp(high + max(zero, one)+1, 0);  //dp[i] = count of good strings when size of string = i
        
        for(int i=high; i>=0; i--)                   //base case: size>high , no good string
        {
            dp[i] = (dp[i+zero] + dp[i+one])%mod;    //because size of string increases if we add 0 zero times or 1 one times, here we need to work only with size of string
            
            if(low <= i and i <= high)               //found one good string, increment cnt by 1
                dp[i] = (dp[i] + 1)%mod;
        }
        return dp[0];
    }
};