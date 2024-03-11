//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void increment(pair<int,int>&p,int& n){
	    if(p.second+1<n){
	        p.second+=1;
	    }
	    else{
	        p.first+=1;
	        p.second=0;
	    }
	}
	void decrement(pair<int,int>&p,int& n){
	    if(p.second-1>=0){
	        p.second-=1;
	    }
	    else{
	        p.first-=1;
	        p.second=n-1;
	    }
	}
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	     pair<int,int> i = {0,0};
	    pair<int,int> j = {n-1,n-1};
	    int count = 0;
	    while(i.first<n && j.first>=0){
	        //cout<<"{"<<i.first<<","<<i.second<<"}"<<endl;
	        //cout<<"{"<<j.first<<","<<j.second<<"}"<<endl;
	        if(mat1[i.first][i.second]+mat2[j.first][j.second]==x){
	            count++;
	            increment(i,n);
	            decrement(j,n);
	        }
	        else if(mat1[i.first][i.second]+mat2[j.first][j.second]<x){
	            increment(i,n);
	        }
	        else{
	            decrement(j,n);
	        }
	    }
	    return count;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends