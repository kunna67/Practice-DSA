class Solution {
public:
int maxnum1(vector<int>& nums){
    int n=nums.size()-1;
    sort(nums.begin(),nums.end());
    return nums[n];

}
int maxnum2(vector<int>& nums){
    int n=nums.size()-1;
    sort(nums.begin(),nums.end());
    return nums[n-1];

}
    int maxProduct(vector<int>& nums) {
        int n1=maxnum1(nums);
        int n2=maxnum2(nums);
        int prod=(n1-1)*(n2-1);
          int maxi;
        for(int i=0;i<nums.size();i++){
          maxi=0;
            for(int j=0;j<nums.size();j++){
                maxi=max(prod,maxi);
                
                

            }
        }
        return maxi;
        
    }
};