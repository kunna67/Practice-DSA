// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start =0;
//         int end=nums.size()-1;
//         int mid;
//         while(start<=end){

//             mid=start+((end-start)/2);

//             if(nums[mid]==target){
//                 return mid;
//             }

//             else if(nums[mid]<target){
//                 start=mid+1;
//             }

//             else{
//                 end=mid-1;
//             }
//         }

//         return -1;
//     }
// };
// Approach
// starting index
// last index of the array
// middle index of thr array
// calculating mid index in each iteration because in each iteration 
// the value of either start or end are varies on changes
// if element found then return index
// if mid index element is less then target then increase the index
// of start to mid + 1
// else the element at mid is greater then end is == to mid-1
// if element found then return -1

// Approach 2
class Solution{
public:
    int search(vector<int>& n, int t) {
        int ind = lower_bound(n.begin(),n.end(), t) - n.begin();
        if(ind < n.size() && n[ind]==t ) return ind;
        return -1;
    }
};