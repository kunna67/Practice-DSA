#User function Template for python3

class Solution:
	def TotalWays(self, N):
		# Code here
		a,b=1,1
		mod = 10**9 + 7
		for i in range(1,N+1):
		    a,b = b%mod, (a%mod + b% mod)%mod
		return (b**2)%mod


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.TotalWays(N)
		print(ans)
# } Driver Code Ends