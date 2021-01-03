#include <iostream>
#include <cstring>

using namespace std;
long long dp[200];
int main(){
    int N;
    cin>>N;
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i = 0; i<N; i++){
        int a;
        cin>>a;
        if(a==1){
            cout<<1<<endl;
            continue;
        }else if(a==2){
            cout<<1<<endl;
            continue;
        }
        for(int j=3; j<=a; j++){
            //memset(dp,0,sizeof(dp));
            dp[j]=dp[j-3]+dp[j-2];
        }
        cout<<dp[a]<<endl;
    }

}