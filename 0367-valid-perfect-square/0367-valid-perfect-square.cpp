class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        long long end=num;
        long long mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid*mid==num)
                return true;
            else if(num<mid*mid)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return false;
    }
};