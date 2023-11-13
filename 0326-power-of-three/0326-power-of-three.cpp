class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        for(long long i=1;i<=n;i=i*3){
            if(i == n){
                return true;
            }
        }
        return false;
        
    }
};



 // method 2 -
        // if(n<=0){
        //     return false;
        // }
        // for(long long i = 1 ; i<=n ;i = i*3){
        //     if (i == n){
        //         return true;
        //     }
        // }
        // return false;
