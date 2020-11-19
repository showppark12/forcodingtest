#include <iostream>
#include <queue>

using namespace std;

int arr[100][100];
int visit[100]={0,};
int t=0;
int N,E;

void DFS(int s){
    visit[s]=1;
    t++;
    for(int i=1 ; i<=N; i++){
        if(arr[s][i]==1 && visit[i]==0){
            DFS(i);
        }
        // if (i == N)
        // {
        //     return;
        // }
    }
}

int main(){
    
    cin>>N;
    cin>>E;
    for(int i = 0; i<E; i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;

    }
    DFS(1);
    cout<<t-1<<endl;
}