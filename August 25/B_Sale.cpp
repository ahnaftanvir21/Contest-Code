#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,m;
    cin>>n>>m;
    int ara[n];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int ans = 0;
    for(int i = 0;i < m;i++){
        //cout<<ara[i]<<" ";
        if(ara[i] < 0){
            ans+=abs(ara[i]);
        }
    }
    cout<<ans<<endl;
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