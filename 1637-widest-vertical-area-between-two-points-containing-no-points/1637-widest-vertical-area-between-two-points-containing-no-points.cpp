class Solution {
public:
    // time/space: O(nlogn)/O(n)
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // sort the distinct x-value
        set<int> xs;
        for (auto& point : points) xs.insert(point[0]);

        // find the maximum width
        int maxWidth = 0;
        for (auto it = next(xs.begin()); it != xs.end(); it++) {
            maxWidth = max(maxWidth, *it - *(prev(it)));
        }
        return maxWidth;
    }
};