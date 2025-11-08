#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    int ans = 1;
    int cnt = 1;
    for(int i = 1;i <n;i++){
        if(ara[i] > ara[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        ans = max(ans,cnt);
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