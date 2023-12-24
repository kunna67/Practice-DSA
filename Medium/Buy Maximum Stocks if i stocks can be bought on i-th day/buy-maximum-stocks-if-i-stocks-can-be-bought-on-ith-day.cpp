//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>> vec;
        int count = 0;
        
        for (int i = 0; i < n; i++)
            vec.push_back({price[i], i+1});
        
        sort(vec.begin(), vec.end());
        
        for (int i = 0; i < n; i++)
        {
            if (k <= 0 or k < vec[i].first)
                break;
            
            int cost = vec[i].first, limit = vec[i].second;
            
            int temp = k / cost;
            
            if (limit >= temp)
            {
                count += temp;
                k -= temp*cost;
            }
            else
            {
                count += limit;
                k -= limit*cost;
            }
            
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends