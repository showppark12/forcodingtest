#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int AdArr[1001][1001];
int visit[1001];
int N, M, V;

void DFS(int s)
{
    visit[s] = 1;
    cout << s << " ";
    for (int i = 1; i <= N; i++)
    {
        if (AdArr[s][i] == 1 && visit[i] == 0)
        {
            DFS(i);
        }
        if (i == N)
        {
            return;
        }
    }
}

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visit[s] = 1;
    while (!q.empty())
    {
        int v = q.front();
        cout << v << " ";
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            if (AdArr[v][i] == 1 && visit[i] == 0)
            {
                q.push(i);
                visit[i] = 1;
            }
        }
    }
}

int main()
{
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        AdArr[a][b] = 1;
        AdArr[b][a] = 1;
    }

    // for(int i=1; i<5; i++){
    //     for(int j=1; j<5; j++){
    //         cout<<AdArr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    DFS(V);
    cout << endl;
    memset(visit, 0, sizeof(visit));
    BFS(V);
    cout << endl;
}