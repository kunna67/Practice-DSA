class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int m;
        int i,j,k;
        vector<int>ans;
        for(i=0;i<n1;i++){
            m=-1;
            for(j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    for(k=j;k<n2;k++){
                        if(nums2[k]>nums2[j]){
                            m=nums2[k];
                            break;
                        }
                    }
                    ans.push_back(m);
                }

            }
        }
        return ans;
    }
};
