class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>v;
        map<int,int>m;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<aliceSizes.size();i++){
        sum1=sum1+aliceSizes[i];

      }
        for(int i=0;i<bobSizes.size();i++){
        sum2=sum2+bobSizes[i];
        m[bobSizes[i]]=i;
        }
        int t=(sum1-sum2)/2;
        for(int i=0;i<aliceSizes.size();i++){
             if(m.count(aliceSizes[i]-t)){
                 v.push_back(aliceSizes[i]);
                 v.push_back(aliceSizes[i]-t);
                 break;
             }
        }
     
    
     return v;
    }
};