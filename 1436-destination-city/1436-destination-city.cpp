class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // Step 1: Create an unordered set to store the starting cities
        unordered_set<string> st;

        // Step 2: Iterate through each element in 'paths' and insert the starting cities into the set
        for(int i = 0; i < paths.size(); i++) {
            st.insert(paths[i][0]);
        }

        // Step 3: Iterate through each element in 'paths' and check for the destination city
        for(int i = 0; i < paths.size(); i++) {
            // Step 4: Check if the destination city is not in the set
            if(st.find(paths[i][1]) == st.end())
                // Step 5: Return the destination city if it's not in the set
                return paths[i][1];
        }

        // Step 6: If no destination city is found, return an empty string
        return "";
    }
};