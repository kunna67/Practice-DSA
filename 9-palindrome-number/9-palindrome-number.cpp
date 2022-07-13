class Solution {
public:
    bool isPalindrome(int n) {
        
        if(n < 0 || (n % 10 == 0 && n != 0)) {
            return false;
        }
        
        int revnum = 0;
        while(n > revnum) {
            revnum = (revnum * 10) + (n % 10);
            n = n / 10;
        }
        
        return n == revnum || n == revnum / 10;
        
        
    }
};