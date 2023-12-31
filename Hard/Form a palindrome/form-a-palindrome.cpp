//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
    //complete the function here
     string s1=str;
        int x=s1.size();
        reverse(str.begin(),str.end());
        string s2=str;
        int y=x;
        
         vector<vector<int>> dp(x+1,vector<int>(y+1,0));
        
    
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                
                    if(s1[i-1]==s2[j-1]){
                 dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    
                   
                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
   
        
           return x-dp[x-1+1][y-1+1];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends