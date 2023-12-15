//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    int sum1 =1;
            int sum2 =1;
   
            int sum = sum1;
   
            long long mod= 1000000007;
   
            for(int i=2;i<=n;i++){
                sum = ((sum1)%mod + (sum2)%mod)%mod;
       
                sum2 = sum1;
                sum1 = sum;
            }
 
            return sum;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends