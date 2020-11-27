#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int> > v;


bool jsort(pair<int, int> v1, pair<int, int> v2){
    if(v1.second == v2.second){
        return v1.first < v2.first;
    }else{
        return v1.second < v2.second;
    }
}

int main(){
    

    int N;
    cin>>N;
    for(int i = 0; i<N; i++){
        int a,b;
        cin>>a>>b;
        v.push_back(pair<int,int>(a,b));
    }

    // for(auto it= v.begin(); it!= v.end(); it++){
    //     cout<<(*it).first<<(*it).second<<endl;
    // }

    sort(v.begin(), v.end(), jsort);

    // for(auto it= v.begin(); it!= v.end(); it++){
    //     cout<<(*it).first<<(*it).second<<endl;
    // }
    int answer = 1;
    int m =0;
    for(int k=1; k<v.size(); k++){
        
        if(v[m].second<=v[k].first){
            answer +=1;
            m=k;
        }
    }
    

    cout<<answer<<endl;


}