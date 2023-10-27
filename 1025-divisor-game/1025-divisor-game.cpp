class Solution {
public:
    bool divisorGame(int n) {

       // EVEN CASE - Alice Wins 
       if(n%2==0) return true;

       // ODD CASE
       return false; 
    }
};