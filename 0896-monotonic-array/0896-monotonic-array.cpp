class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     int n=nums.size();
     int last=nums[n-1];
     if(last > nums[0]){
         for(int i=1;i<nums.size();i++){
             if(nums[i-1] > nums[i]) {
                 return false;
             }
         }
     }
          if(last < nums[0]){
         for(int i=1;i<nums.size();i++){
             if(nums[i-1] < nums[i]) {
                 return false;
             }
         }
     }
          if(last == nums[0]){
         for(int i=1;i<nums.size();i++){
             if(nums[i-1] != nums[i]) {
                 return false;
             }
         }
     }
        return true;
    }
};