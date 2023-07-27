class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for(int i = 31; i >= 0; i--){
        rev |= (n & 1) <<i;
        n>>=1;
      }
      return rev;
    }
};