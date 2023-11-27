class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>final(nums.size());
        final[0] = nums[0];
        for(int i = 1; i<nums.size() ;i++) {
            final[i] = final[i-1] + nums[i];
        }
        return final;
    }
};