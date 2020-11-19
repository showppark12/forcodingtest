#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int arr[30][30];
int visit[30][30];
int d=0;
int N;
vector<int> v;

int dx[4]= {1,0,-1,0};
int dy[4]= {0,1,0,-1};

void DFS(int s1, int s2){
    
    visit[s1][s2]=1;
    v[d-1]++;

    for(int i =0; i<4; i++){
        int nx= s1 + dx[i];
        int ny= s2 + dy[i];

        if(arr[nx][ny]==1 && visit[nx][ny]==0){
            DFS(nx,ny);
        }
    }
}


int main(){
    cin>>N;
    for(int i = 1; i<=N; i++){
        for(int j=1; j<=N; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=N; j++){
            if(arr[i][j]==1 && visit[i][j]==0){
                d=d+1;
                v.push_back(0);
                DFS(i,j);
                
            }
        }
    }  
    sort(v.begin(), v.end());
    cout<<d<<endl;
    for(auto it= v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
} 