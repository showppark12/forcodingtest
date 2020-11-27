def sol(str):
    li = []
    for s in range(len(str)):
        li.append(int(str[s]))
    str=int(str)
    for l in range(len(li)):
        str=str+li[l]
    return str

n=int(input())
count=0
n1=n
while n1>0:
    n1=int(n1/10)
    count=count+1

start_num=n-count*9

num=0
for i in range(start_num,n+1):
    if(sol(str(i))==n):
        num=i
        break

print(num)

