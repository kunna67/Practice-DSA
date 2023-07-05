class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Sort the vector in ascending order
        sort(nums.begin(), nums.end());
        
        // If the size of the vector is not divisible by 3, add zeros until it is
        if (nums.size() % 3 != 0) {
            while (nums.size() % 3 != 0) {
                nums.push_back(0);
            }
        }
        
        // Iterate over the vector in groups of three
        for (int i = 0; i < nums.size() - 2; i = i + 3) {
            // If the first and third elements of the group are not equal, return the first element
            if (nums[i] != nums[i + 2]) {
                return nums[i];
            }
        }
        
        // If no single number is found, return 0
        return 0;
    }
};