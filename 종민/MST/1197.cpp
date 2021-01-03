#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int V, E;
int parent[10001]; 
int Answer=0;
vector<pair<int, pair<int, int> > > v;

int Find(int x){
    if (parent[x]==x) return x;
    else return parent[x]= Find(parent[x]);//최고 부모노드를 찾아주는거지
}

void Union(int x, int y){
    x = Find(x);
    y = Find(y);

    if(x != y) parent[y]=x;

}

bool SameParent(int x, int y){
    x = Find(x);
    y = Find(y);

    if(x==y) return true;
    else return false;

}

int main(){
    cin>>V>>E;
    for(int i=0; i<E; i++){
        int a,b,w;
        cin>>a>>b>>w;

        v.push_back(make_pair(w,make_pair(a,b)));
        
    }
    sort(v.begin(), v.end());
    
    for (int i = 1; i<= V; i++){
        parent[i] = i; //시작은 자기가 자기의 부모인거지
    }

    for (int i=0; i<E; i++){
        if(SameParent(v[i].second.first,v[i].second.second)==false){
            Union(v[i].second.first,v[i].second.second);
            Answer += v[i].first;
        }
    }
    cout<<Answer<<endl;

}