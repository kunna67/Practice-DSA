//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
          int n = S.size();
        int maxlen = 0,start=0,length;
        for(int center=0;center<n;center++){
            //odd part
            int left = center,right = center;
            while(left>=0 && right<n && S[left]==S[right]){
                length = right-left+1;
                if(length>maxlen){
                    maxlen = length;
                    start=left;
                }
                left--;
                right++;
            }//even part
            left = center;
            right = center+1;
            while(left>=0 && right<n && S[left]==S[right]){
                length = right-left+1;
                if(length>maxlen){
                    maxlen = length;
                    start=left;
                }
                left--;
                right++;
            }
        }
        return S.substr(start, maxlen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends