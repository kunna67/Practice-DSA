class Solution {
public:
    int minimumOneBitOperations(int n) {
       bitset<32> bs(n);
       string bb = bs.to_string();
       string binar;
       binar += bb[0];
       for(int i=1;i<32;i++){
           binar += (abs(bb[i] - binar[i-1])+'0'); 
       }
       return stoi(binar,0,2);
    }
};