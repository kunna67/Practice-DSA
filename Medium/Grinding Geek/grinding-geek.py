
from typing import List


class Solution:
    def max_courses(self, n : int, total : int, cost : List[int]) -> int:
        # code here
        dp = [0 for _ in range(total+1)]
        
        for c in reversed(cost):
            for t in range(total,c-1,-1):
                dp[t] = max(dp[t],dp[t-(c+9)//10]+1)
        return dp[total]
        



#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        total = int(input())
        
        
        cost=IntArray().Input(n)
        
        obj = Solution()
        res = obj.max_courses(n, total, cost)
        
        print(res)
        

# } Driver Code Ends