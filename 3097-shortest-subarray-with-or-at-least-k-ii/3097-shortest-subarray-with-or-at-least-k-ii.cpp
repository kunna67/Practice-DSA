class Solution {
public:
    int sum(vector<int> & a){
        int ans = 0;
        long long power = 1;
        for(int i = 31;i> 0;i--){
            if(a[i])ans+=power;
            power = power * 2;
        }
        return ans;
    }
    void add(vector<int> & bitvector, int x , bool add){
        int sign;
        if(add)sign = 1;
        else sign = -1;
        for(int j = 31;j>0;j--){
            bitvector[j] += (x&1)*sign;
            x = x/2;
        }
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0,j = 0, ans = nums.size()+1;
        vector<int> bitvector(32,0);
        add(bitvector,nums[j],true);
        while(j<n){
            while(i <= j && sum(bitvector)>=k){
                if(sum(bitvector)>=k)ans = min(ans,j-i+1);
                add(bitvector,nums[i],false);
                i++;
            }

            j++;
            if(j<n)add(bitvector,nums[j],true);
        }
        if(ans==nums.size()+1)return -1;
        return ans;
    }
};