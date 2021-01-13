from collections import deque


def solution(n, m, image):
    answer = 0
    visited = [[False] * m for _ in range(n)]

    for i in range(n):
        for j in range(m):
            if not visited[i][j]:
                answer += 1
                visited[i][j] = True
                bfs(i, j, m, n, image, visited)

    return answer

def valid(n,m,next_x,next_y):
    return 0 <= next_x < n and 0 <= next_y < m


def bfs(x, y, m, n, image, visited):
    queue = deque()
    queue.append((x, y))
    while queue:
        x, y = queue.popleft()
        DELTAS = ((1, 0), (-1, 0), (0, 1), (0, -1))
        for dx, dy in DELTAS:
            next_x = x + dx;
            next_y = y + dy;
            if valid(n,m,next_x,next_y) and not visited[next_x][next_y] and image[next_x][next_y] == image[x][y]:
                queue.append((next_x, next_y))
                visited[next_x][next_y] = True