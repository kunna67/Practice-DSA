//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int repeated;
        for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]<0)
                repeated=abs(arr[i]);
            else
                arr[abs(arr[i])-1] *= -1;
        }
        int missing;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                missing=i+1;
                break;
            }
        }
        return {repeated,missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends