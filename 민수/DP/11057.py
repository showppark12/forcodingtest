n = int(input())

dp = [1]*10

mod = 10007

for _ in range(n-1):
    for i in range(1,10):
        dp[i] = dp[i-1]+dp[i]

print(sum(dp)%mod)