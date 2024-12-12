class Solution{
public:
    long long pickGifts(vector<int>& gifts, int k){
        priority_queue<int>pq;
        int n = gifts.size();
        
        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }
        long long sum=0;
        
        for(int j=0;j<k;j++)
        {
            int temp = pq.top();
            pq.push(sqrt(temp));
            pq.pop();
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};

// class Solution {
// public:
//     long long pickGifts(vector<int>& gifts, int k) {
//         priority_queue<int> pq;
//         int n = gifts.size();

//         for(int i = 0; i<n; i++)
//         {
//             pq.push(gifts[i]);
//         }
//         long long sum = 0;
        
//         for(int j = 0; j<k; j++)
//         {
//             int temp = pq.top();
//             pq.push(sqrt(temp));
//             pq.pop();
//         }
//         while(!pq.empty()){
//             sum+=pq.top();
//             pq.pop();
//         }
//         return sum;
//     }  
// };