
tc = int(input())

dp = [1 for i in range(100)]


for i in range(3,len(dp)):
    dp[i] = dp[i-2]+dp[i-3]

nums = []

for t in range(tc):
    nums.append(int(input()))

for n in nums:
    print(dp[n-1])

