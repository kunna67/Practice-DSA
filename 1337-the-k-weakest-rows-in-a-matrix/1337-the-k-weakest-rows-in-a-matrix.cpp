class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // Create a set to store pairs of (count of ones in a row, row index)
        set<pair<int,int>>s;

        // Iterate through each row of the matrix
        for(int i=0;i<mat.size();i++) {
            int count=0;
            
            // Count the number of ones in the current row
            for(int j=0;j<mat[i].size();j++) {
                if(mat[i][j]==1) {
                    count++;
                }
            }
            
            // Insert a pair of count and row index into the set
            s.insert({count,i});
        }

        // Create a vector to store the k weakest row indices
        vector<int>v;

        // Iterate through the set to extract the k weakest rows
        for(auto x=begin(s);k>0;k--,x++) {
            v.push_back(x->second);
        }

        // Return the vector containing the k weakest row indices
        return v;
    }
};
