class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        // Get the size of the input vector
        int n = code.size();
        
        // Duplicate the code vector to handle wrapping around
        code.insert(code.end(), code.begin(), code.end());
        
        // Initialize the result vector with zeros
        vector<int> res(n, 0);
        
        // If k is 0, the result is a vector of zeros
        if(k == 0)
            return res;
        // If k is positive, perform the decoding for forward wrapping
        else if(k > 0){
            int i = 0, j = 1, sum = 0;
            // Iterate through the elements in the duplicated vector
            while(i < n){
                // Add the current element to the sum
                sum += code[j];
                
                // Check if the window size is reached
                if(j-i == k){
                    // Store the sum in the result vector and update indices
                    res[i] = sum;
                    i++;
                    sum -= code[i];
                }
                j++;
            }
        }
        // If k is negative, perform the decoding for backward wrapping
        else{
            // Make k positive for simplicity
            k *= -1;
            
            int i = 2*n-1, j = 2*n-2, sum = 0;
            // Iterate through the elements in the duplicated vector
            while(i >= n){
                // Add the current element to the sum
                sum += code[j];
                
                // Check if the window size is reached
                if(i-j == k){
                    // Store the sum in the result vector and update indices
                    res[i-n] = sum;
                    i--;
                    sum -= code[i];
                }
                j--;
            }
        }
        // Return the final result vector
        return res;
    }
};