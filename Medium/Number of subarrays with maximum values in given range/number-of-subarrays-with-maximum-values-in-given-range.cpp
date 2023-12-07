//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long ans=0,c=0,p=0;
        for(int i=0;i<n;i++){
            c++;
            if(a[i]>R){
                c=0;p=0;
            }
            else if(a[i]<L){
                ans+=p;
            }
            else{
                ans+=c;
                p=c;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends