from collections import deque

Node,Edge,Root=map(int,input().split())

matrix=[[0]*(Node+1) for i in range(Node+1)]
for i in range(Edge):
    a,b = map(int,input().split())
    matrix[a][b]=matrix[b][a]=1

visit_list=[0]*(Node+1)


def bfs(R):
    queue = deque([R])
    visit_list[R] = 0;
    while queue:
        R = queue.popleft()
        print(R, end=" ")
        for i in range(1,Node+1):
            if(visit_list[i]==1 and matrix[R][i]==1):
                queue.append(i)

                visit_list[i]=0


def dfs(R):
    visit_list[R]=1
    print(R, end=" ")
    for i in range(1,Node+1):
        if(visit_list[i]==0 and matrix[R][i]==1):
            dfs(i)


dfs(Root)
print()
bfs(Root)

