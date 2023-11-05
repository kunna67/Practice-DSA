class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int current=arr[0];
        int win=0;

        for(int i=1; i<arr.size(); i++){
            if(arr[i]>current){
                current=arr[i];
                win=1;
            }
            else{
                win++;
            }

            if(k==win)
            break;
        }
        return current;
    }
};