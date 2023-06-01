/******************************************************************************
* Author:           Syed Tamal
* Created:          31 May 2023  00:11:02 
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

vector<vector<int>>dp(505, vector<int>(505, -1));

int f(int w, int h){
    if(w==h) return 0;

    if(dp[w][h] != -1) return dp[w][h];

    int res = INT_MAX;
    for(int i=1;i<=h/2;i++){
        res = min(res, 1+f(w, i)+f(w, h-i));
    }
    for(int i=1;i<=w/2;i++){
        res = min(res, 1+f(i, h)+f(w-i, h));
    }

    return dp[w][h] = res;
}

int32_t main(){
    fastio
    int a,b;
    cin>>a>>b;
    cout<<f(a,b);
}
