n = int(input())

dp = [1]*91
dp[0] = 0
for i in range(3,91):
    dp[i] = dp[i-1]+dp[i-2]

print(dp[n])