//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   bool isPrime(int num){
        
        if(num == 1) return false;
        
        for(int i = 2; i*i<=num; i++){
            if(num % i == 0){
                return false;
            }
        }
        
        return true;
    }
     int sumOfPrimeFactor(int num){
        
        int sum = 0;
        
        //we know that every no. first factor is prime and first prime no. is 2 
        //and we know that after sqrt(num) factors will swaped and repeate itself
        for(int i = 2; i<=num; i++){
            
            //first factor always prime hoga tho jab tak divide hoga divide krege aur sum find krege
            while(num%i == 0){
                sum += sumOfDigits(i);
                num /= i;
            }
        }
        
        return sum;
    }
     int sumOfDigits(int num){
        int sum = 0;
        
        while(num){
            sum += num % 10;
            num /= 10;
        }
        
        return sum;
    }
  
    int smithNum(int n) {
        // code here
        if(isPrime(n)) return false;
        
        return sumOfDigits(n) == sumOfPrimeFactor(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends