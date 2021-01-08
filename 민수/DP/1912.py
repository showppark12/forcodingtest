n = int(input())
# n = 10
li = list(map(int,input().split()))
#  li = [10,-4,3,1,5,6,-35,12,21,-1]

sum = [li[0]]


for i in range(n-1):
    sum.append(max(sum[i]+li[i+1],li[i+1]))

print(max(sum))
