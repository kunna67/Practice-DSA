class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int count = 0;
       int j  = 0;
       for(int i = 0; i < nums.size(); i++){
           if(nums[i]==1){
               j++;
           }
           else{
               count = max(count,j);
               cout<<count<<" "<<j<<endl;
               j = 0;
           }
       } 
       count = max(count,j);
       return count;
    }
};