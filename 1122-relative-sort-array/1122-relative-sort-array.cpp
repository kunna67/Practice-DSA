class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        vector<int> ans;
        int n1=arr1.size();
        int n2=arr2.size();
        int i=0;
        int j=0;
        while(j<n2)
        {
            for(int i=0;i<n1;i++)
            {
                if(arr2[j]==arr1[i])
                {
                    ans.push_back(arr1[i]);
                    arr1[i]=-1;
                }

            }
            j++;
        }
        int size=ans.size();
        for(int i=0;i<n1;i++)
        {
            if(arr1[i]>-1)
            {
                ans.push_back(arr1[i]);
            }
        }
        sort(ans.begin()+size,ans.end());
        return ans;
    }
};