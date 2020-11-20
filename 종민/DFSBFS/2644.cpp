#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int arr[101][101];
int d[200]={0};
int visit[101]={0};
int a,b;
int N;

void BFS(int s){
    queue<int> q;
    q.push(s);
    visit[s]=1;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i=1; i<=N; i++){
            if(arr[v][i]==1 && visit[i]==0){
                if(i==b){
                    d[i]= d[v]+1;
                    cout<<d[b]<<endl;
                    return ;
                }
                q.push(i);
                d[i]= d[v]+1;
                visit[i]=1;
            }
        }
    }
    cout<<"-1"<<endl;
    return;
}

int main(){
    cin>>N;
    cin>>a>>b;
    int M;
    cin>>M;

    for(int i = 0; i<M; i++){
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }

    BFS(a);

}