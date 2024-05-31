class Solution {
public:
    int jump(vector<int>& nums) {
        int j=0,x=0,count=0,n=nums.size();
        if(n<=1){
            return 0;
        }
        while(j<nums.size()){
            if(nums[j]+j>=n-1) return count+1;
            int maxi=0,ind;
            for(int i=nums[j]+j;i>j;i--){
                if(maxi<nums[i]+i){
                    ind=i;
                    maxi=nums[i]+i;
                }
            }
            j=ind;
            count++;
        }
        return count;
    }
};