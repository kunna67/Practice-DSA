class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int size = candidates.size();
        int largest_combination = 0;

        for (int i = 31; i >= 0; i--) {
            int count = 0;

            for (int j = 0; j < size; j++) {
                if ((candidates[j] >> i) & 1) {
                    count++;
                }
            }
            largest_combination = max(largest_combination, count);
        }
        return largest_combination;
    }
};
