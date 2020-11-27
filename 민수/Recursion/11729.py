def recursion_hanoi(n,start,end):


    if(n==1):
        print(start,end)
        return
    #1단계
    recursion_hanoi(n-1,start,6-start-end)
    #2단계
    print(start,end)
    #3단계
    recursion_hanoi(n-1,6-start-end,end)




n=int(input())
print(2**n-1)
recursion_hanoi(n,1,3)