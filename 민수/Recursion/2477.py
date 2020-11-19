def stars(n):
    matrix=[]
    for i in range(3*len(n)):
        if i//len(n)==1: #몫이 1인경우 공백을 추가한다.
            matrix.append(n[i%len(n)]+" "*len(n)+n[i%len(n)])
        else:
            matrix.append(n[i%len(n)]*3)

    return list(matrix)


star=["***","* *","***"]
n= int(input())
k=0
while n != 3: #3보다 큰경우 k를 카운터로 추가해서 반복하게
    n = int(n/3)
    k +=1

for i in range(k): # k만큼 반복
    star = stars(star)

for i in star:
    print(i)