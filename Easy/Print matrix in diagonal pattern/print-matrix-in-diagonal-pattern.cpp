//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        //Your code here
        vector<int> ans;
        int n = mat.size();
        
        for(int i=0; i<2*n; i++){
            vector<int> temp;
            for(int j=i,k=0; j>=0 && k<n; j--,k++){
                if(j>n-1) continue;
                temp.push_back(mat[j][k]);
            }
            if(i & 1) reverse(temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends