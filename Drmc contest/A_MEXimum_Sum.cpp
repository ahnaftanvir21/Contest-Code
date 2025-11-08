#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    int cnt[205] = {0};
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        cnt[ara[i]]++;
    }
    int ans = 0;
    for(int i = 1;i <= 200;i++){
        if(cnt[i] > cnt[i-1]){
            cnt[i] = cnt[i-1];
        }
        if(cnt[i] < cnt[i-1]){
            ans+= (cnt[i-1]-cnt[i])*i;
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