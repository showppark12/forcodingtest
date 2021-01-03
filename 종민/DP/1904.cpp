#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int dp[N];
    if(N==0){
        cout<<0<<endl;
        return 0;
    }
    if(N==1){
        cout<<1%15746<<endl;
        return 0;
    }
    if(N==2){
        cout<<2%15746<<endl;
        return 0;
    }
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i = 3; i <= N; i++ ){
        dp[i] = (dp[i-1]+dp[i-2])%15746;
    }
    cout<<dp[N]<<endl;

}