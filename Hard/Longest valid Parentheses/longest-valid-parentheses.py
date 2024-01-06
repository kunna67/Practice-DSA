# User function Template for Python3

class Solution:
    def maxLength(self, S):
        # code here
        max_length = 0
        stack = []
        stack.append(-1)
        
        for i in range(len(S)):
            if S[i] == '(':
                stack.append(i)
            else:
                stack.pop()
                if not stack:
                    stack.append(i)
                else:
                    max_length = max(max_length, i-stack[-1])
                    
        return max_length


#{ 
 # Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        S = input()
        
        ob = Solution()
        print(ob.maxLength(S))
# } Driver Code Ends