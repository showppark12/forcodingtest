#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>


using namespace std;
int arr[101][101];
int visit[200][200];
int d[200][200];
int N,M;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void BFS(int s1,int s2){
    queue<pair<int, int> > q;
    q.push(pair<int,int>(s1,s2));
    visit[s1][s2]=1;
    d[s1][s2]++;
    while (!q.empty()){
        int v1 = q.front().first;
        int v2 = q.front().second;
        q.pop();
        for(int i =0; i<4; i++){
            int nx = v1+dx[i];
            int ny = v2+dy[i];

            if(arr[nx][ny]==1 && visit[nx][ny]==0){
                q.push(pair<int,int>(nx,ny));
                visit[nx][ny]=1;
                d[nx][ny] = d[v1][v2] +1;
            }
        }

    }
    
}

int main(){
    memset(visit,0,40000);
    memset(d,0,40000);
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    
    BFS(1,1);
    cout<<d[N][M]<<endl;


}