//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int x =0;
        for(int i=0;i<8;i++){
            if(i<=3){
                if(n&(1<<i))x|=(1<<(4+i));
            }
            else{
                if(n&(1<<i))x|=(1<<(i-4));
            }
        }
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends