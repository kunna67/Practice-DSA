class Solution {
public:
    int f(int i,int target,vector<int>&nums){
        if(i==0) return target==0;
        if(i<0) return 0;
        int p=f(i-1,target+nums[i-1],nums);
        int m=f(i-1,target-nums[i-1],nums);
        return p+m;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums.size(),target,nums);
        
    }
};



