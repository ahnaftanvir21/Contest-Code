#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+1];
    int sum[n+1];
    bool ex[n+1] = {false},px[n+1] = {false};
    for(int i = 1;i <= n;i++){
        cin>>ara[i];
        ex[ara[i]] = true;
    }
    int ans = 0;
    sum[0] = 0;
    for(int i = 0;i <= n;i++){
        sum[i] = sum[i-1]+ara[i];
        for(int j = 0;j < i-1;j++){
            int p = sum[i]-sum[j];
            if(p <= n && ex[p]){
                //cout<<j<<" "<<i<<" "<<p<<endl;
                px[p] = true;
            }
        }
    }
    for(int i = 1;i <= n;i++){
        if(px[ara[i]]){
            ans++;
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
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}