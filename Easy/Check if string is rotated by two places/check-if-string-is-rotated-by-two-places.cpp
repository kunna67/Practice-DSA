//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        // reverse(str1.begin(),str1.end());
        // reverse(str1.begin(),str1.begin()+2);
        // reverse(str1.begin()+2,str1.begin());
        
        // if(str1==str2)
        //     return true;
            
        // reverse(str1.begin(),str1.begin()+4);
        // reverse(str1.begin()+4,str1.end());
        // reverse(str1.begin(),str1.end());
        
        // return str1==str2;
        
        int s1=str1.length();
        int s2=str2.length();
        if(s1!=s2) return 0;
        int n=s1;
        if(str1[0] == str2[n-2] && str1[1]== str2[n-1]) return 1;
        if(str1[0] == str2[2] && str1[1]==str2[3]) return 1;
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends