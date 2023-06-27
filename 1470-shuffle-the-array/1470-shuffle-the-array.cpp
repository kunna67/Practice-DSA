class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n;
        vector<int> res;
        while(j<2*n){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            i++;
            j++;
        }
        return res;
    }
};