//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int a = -1;
        int b = -1;
        int c = -1;
        int ans = INT_MAX;
        for(int i=0; i<S.length(); i++){
            if(S[i]=='0'){
                a = i;
            }
            if(S[i] == '1'){
                b = i;
            }
            if(S[i] == '2'){
                c = i;
            }
            if(a!=-1 && b!=-1&&c!=-1){
                int maxIndex = max(a, max(b,c));
                int minIndex = min(a, min(b,c));
                int tempAns = maxIndex-minIndex+1;
                ans = min(ans, tempAns);
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends