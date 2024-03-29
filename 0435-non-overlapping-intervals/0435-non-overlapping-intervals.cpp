class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort on the basis of second ele
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b){
            return a[1] < b[1];
        }); 
        int remove =0;
        int end = INT_MIN;
        for(const auto &interval : intervals){
            if(interval[0] >= end)
                end = interval[1];
            else 
                remove++;
        }
        return remove;
    }
};