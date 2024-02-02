//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n = s.size() , i = 0 ;
        bool flag = false ;
        if( s[0] == '-' ){
            i++ ;
            flag = true ;
        }
        int ans = 0 ;
        for( i ; i < n ; i++ ){
            if( s[i] >= '0' && s[i] <= '9' ){
                ans = ans*10 + s[i]-'0' ;
            }
            else return -1 ;
        }
        if(flag == true) return -1*ans ;
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends