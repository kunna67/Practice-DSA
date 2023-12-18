class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int size = nums.size();
        return (nums[size-1]*nums[size-2]) - (nums[1]*nums[0]);
    }
};