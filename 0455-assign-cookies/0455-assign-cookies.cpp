class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       // Sort the greed factors and cookie sizes
    std::sort(g.begin(), g.end());
    std::sort(s.begin(), s.end());

    // Initialize pointers and count
    int i = 0, j = 0, count = 0;

    // Iterate through both arrays
    while (i < g.size() && j < s.size()) {
        // If the current cookie is large enough, satisfy the child
        if (s[j] >= g[i]) {
            count++;
            i++;
        }
        // Move to the next cookie, regardless of whether it satisfies the current child
        j++;
    }

    return count;
    }
};