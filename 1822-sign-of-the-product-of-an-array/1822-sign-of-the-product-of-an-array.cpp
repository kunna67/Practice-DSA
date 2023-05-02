class Solution {
public:
    int arraySign(vector<int>& nums) {
        // let, 0 means positive
            //. 1 means negative
        int signfun = 0;
        for(auto x:nums)
        {
            if(x<0)signfun^=1;
            else if(x==0)
            {
                return 0;
            }
        }
        return signfun==0?1:-1;
    }
};