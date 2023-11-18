class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //  1 2 3 4 5 6 7 
        //  1 1 1 1 1 1 1

        int i = 0;
        int j = 1;
        int ans = 1;
        while(j<nums.size()){
            long long mid = (j-i)*1LL*(nums[j]-nums[j-1]);
            if( mid <= k){
                k-= mid;
                j++;
            }
            else{
                k+= nums[j-1]-nums[i];
                i++;
            }
            ans = max(ans,j-i);
        } 
        return ans;
    }
};