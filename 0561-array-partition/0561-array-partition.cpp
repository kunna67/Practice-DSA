class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =1;i<nums.size();i+=2)
            nums[i]=nums[i-1];
        
        int ans=0;
        for(auto i:nums)
            ans+=i;
        return ans/2;
        
    }
};