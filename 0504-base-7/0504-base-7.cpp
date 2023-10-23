class Solution {
public:
    string convertToBase7(int num) {
        int ans =0;
        int j = 1;
        while(num)
        { 
            ans += (num%7)*j;
            num /=7;
            j*=10;
        }
        return to_string(ans);
    }
};