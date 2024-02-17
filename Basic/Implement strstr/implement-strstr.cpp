//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int i=0,j=0,k=x.size(),sz=s.size();
     string t = "";
     while(j<sz)
     {
         t.push_back(s[j]);
         if(k>j-i+1)
         j++;
         else if(k==j-i+1)
         {
             if(t==x)
             return i;
             
             t.erase(0,1);
             i++;
             j++;
         }
     }
     return -1;
}