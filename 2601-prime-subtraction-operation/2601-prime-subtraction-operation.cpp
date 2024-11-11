class Solution {
public:
    vector<int>Allprime;
    bool isprime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    void generateprime(){
        Allprime.push_back(2);
        for(int i=3;i<=1000;i++){
            if(isprime(i)){
                Allprime.push_back(i);
            }
        }
    }
    int maxprime(int n){
        if(Allprime[0]>n){
            return 0;
        }
        int ans=Allprime[0];
        for(int i=1;i<Allprime.size();i++){
            if(Allprime[i]>n){
                return ans;
            }
            ans=Allprime[i];
        }
        return ans;
    }
    bool primeSubOperation(vector<int>& nums) {
       generateprime();
       int prev=0;
       for(int i=0;i<nums.size();i++){
           int diff=nums[i]-prev-1;
           int mxprime=maxprime(diff);
           nums[i]-=mxprime;
           prev=nums[i];
       }
       for(int i=1;i<nums.size();i++){
           if(nums[i]<=nums[i-1]){
               return false;
           }
       }
       return true;
    }
};