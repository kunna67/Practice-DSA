class Solution {
public:
    int minDifference(vector<int>& nums) {
        //step 1
        int n = nums.size();
        if (n <= 4) return 0;

        // step 2: Sort the array
        sort(nums.begin(), nums.end());

        // step 3: Evaluate the minimum difference possible with at most 3 moves
        int minDiff = min({ 
            nums[n-1] - nums[3],      // Change 3 smallest elements
            nums[n-2] - nums[2],      // Change 2 smallest and 1 largest element
            nums[n-3] - nums[1],      // Change 1 smallest and 2 largest elements
            nums[n-4] - nums[0]       // Change 3 largest elements
        });

        return minDiff;
    }
};