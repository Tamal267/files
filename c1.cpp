/******************************************************************************
* Author:           Syed Tamal
* Created:          30 May 2023  07:38:16 
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

int arr[2004];

vector< vector<int> > dp(2004, vector<int>(2004));
vector< vector<bool> > mark(2004, vector<bool>(2004));

int f(int i, int N){
    if(N==0) return 0;
    if(i<0) return -(1LL<<62);

    if(mark[i][N]) return dp[i][N];
    int take = -(1LL<<62), notake = -(1LL<<62);

    take = arr[i]*N + f(i-1, N-1);
    notake = f(i-1, N);
    mark[i][N] = true;
    return dp[i][N] = max(take, notake);
}

int32_t main(){
    fastio
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<f(n-1, m)<<"\n";
}
