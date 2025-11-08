#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    bool f = false;
    int ara[n+1];
    int ans = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i = 0;i < n;i++){
        if(ans == ara[i]){
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