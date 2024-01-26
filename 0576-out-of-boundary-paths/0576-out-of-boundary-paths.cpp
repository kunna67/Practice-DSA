class Solution {
    int mod = 1e9 + 7;
    map<vector<int>, int> mp;
    long long dfs(int sr, int sc, int m, int n, int mm){
        if(mm == 0)
            return (sr < 0 || sc < 0 || sr >= m || sc >= n);
        if(sr < 0 || sc < 0 || sr >= m || sc >= n) 
            return 1;
        if(mp.count({sr, sc, mm})) return mp[{sr, sc, mm}];
        return mp[{sr, sc, mm}] = (long long)(
            (dfs(sr-1, sc, m, n, mm-1)%mod)+
            (dfs(sr+1, sc, m, n, mm-1)%mod)+
            (dfs(sr, sc-1, m, n, mm-1)%mod)+
            (dfs(sr, sc+1, m, n, mm-1)%mod)
        ) % mod;
    }
public:
    int findPaths(int m, int n, int maxMove, int sr, int sc) {
        return dfs(sr, sc, m, n, maxMove)%mod;
    }
};