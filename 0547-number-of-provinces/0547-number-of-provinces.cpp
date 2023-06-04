class Solution {
public:
    void dfs(vector<int>&vis,vector<int>ad[],int i){
        vis[i]=1;
        for(auto k:ad[i]){
            if(!vis[k]){
                dfs(vis,ad,k);
            }
        }
    }
    int findCircleNum(vector<vector<int>>&g) {
        int n=g.size();
        vector<int>ad[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]){
                    ad[i].push_back(j);
                    ad[j].push_back(i);
                }
            }
        }
        int c=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(vis,ad,i);
            }
        }
        return c;
    }
};