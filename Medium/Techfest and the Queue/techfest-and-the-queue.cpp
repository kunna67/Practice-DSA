//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    int res = 0;
        for(int i=a;i<=b;i++)
        {
            int curr=i;
            while(curr%2==0)
            {
                res++;
                curr/=2;
            }
            for(int j=3;j*j<=curr;j+=2)
            {
                while(curr%j==0)
                {
                    res++;
                    curr/=j;
                }
            }
            if(curr>1){ res++; }
        }
        
        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends