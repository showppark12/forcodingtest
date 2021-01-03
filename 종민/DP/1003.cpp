#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int dp[2][41];

int main(){
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
    dp[1][1] = 1;

    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        if(a==0){
            cout<<dp[0][0]<<" "<<dp[1][0]<<endl;
            continue;
        } else if(a==1){
            cout<<dp[0][1]<<" "<<dp[1][1]<<endl;
            continue;
        }
        for(int i = 2; i<=a; i++){
            dp[0][i] = dp[0][i-1] + dp[0][i-2];
            dp[1][i] = dp[1][i-1] + dp[1][i-2];
        }
        cout<<dp[0][a]<<" "<<dp[1][a]<<endl;
    }
}