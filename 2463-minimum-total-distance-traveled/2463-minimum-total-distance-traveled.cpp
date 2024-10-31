class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {

        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());

        int n=robot.size();
        int m=factory.size();
        long long dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0){
                    dp[i][j]=0;
                    continue;
                }
                dp[i][j]=1e17;
            }
        }

        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                long long dist=0;
                int curr=i;
                for(int k = 0;k<=factory[j-1][1];k++){
                    dp[i][j]=min(dp[i][j],dp[i-k][j-1]+dist);
                    if(curr-1<0){
                        break;
                    }
                    dist+=abs(robot[curr-1]-factory[j-1][0]);
                   
                    curr--;
                }
            
            }
        }
        return dp[n][m];
    }
};