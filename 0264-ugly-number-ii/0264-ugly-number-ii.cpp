class Solution {
public:
    int nthUglyNumber(int n) {
        int arr[n+1]; arr[0] = 0; arr[1] = 1;
        int i=1, j=1, k=1;

        for (int x=2; x<=n; x++) {
            int small = min(arr[i]*2, min(arr[j]*3, arr[k]*5));
            arr[x] = small;
            if (small == arr[i]*2) i++;
            if (small == arr[j]*3) j++;
            if (small == arr[k]*5) k++;
        }
        return arr[n];
    }
};