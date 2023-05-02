class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        
        int l = 0,r = h.size()-1;
        
        ans = max(ans,min(h[l],h[r])*(r-l));
        
        while(l<r){
            if(h[l]>h[r]){
                r--;
            }else {
                l++;
            }
            ans = max(ans,min(h[l],h[r])*(r-l));
        }
        
        return ans;
    }
};