#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,m;
    cin>>n>>m;
    int ara[n+2][m+2];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>ara[i][j];
        }
    }
    for(int j = 0;j < m;j++){
        for(int i = 0;i < n;i++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}