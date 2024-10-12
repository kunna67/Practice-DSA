class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int, int>> vp;
        for(int i=0; i<intervals.size(); i++){
            vp.push_back({intervals[i][0], 1});  // start of interval
            vp.push_back({intervals[i][1] + 1, -1});  // end of interval (+1 to handle overlapping)
        }
        sort(vp.begin(), vp.end());
        
        int maxi = 1;
        int cnt = 0;
        
        for(auto it: vp){
            int type = it.second;
            cnt += type;
            maxi = max(maxi, cnt);
        }
        
        return maxi;
    }
};