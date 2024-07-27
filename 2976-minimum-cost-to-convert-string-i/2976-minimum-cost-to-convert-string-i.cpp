class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<int>>graph(26,vector<int>(26,1e8));

        for(int i =0;i<26;i++){
            graph[i][i]=0;}

            for(int i =0;i<original.size();i++){
                graph[original[i]-'a'][changed[i]-'a'] = min( graph[original[i]-'a'][changed[i]-'a'],cost[i]);
            }

            for(int k=0;k<26;k++){
                for(int i =0;i<26;i++){
                    for(int j =0;j<26;j++){
                        graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j]);
                    }
                }
            }

            long long ans=0;

            for(int i=0;i<source.size();i++){
                if(graph[source[i]-'a'][target[i]-'a']>= 1e8) return -1;
                ans+=graph[source[i]-'a'][target[i]-'a'];
            }
            return ans;

    }
};