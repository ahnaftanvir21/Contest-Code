#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    int ans = 0;
    ara[0] = 0;
    for(int i = 1;i <= n;i++){
        cin>>ara[i];
        ara[i]+=ara[i-1];
    }
    for(int i = 1;i <= n;i++){
        for(int j = i;j <= n;j++){
            int p = (ara[j]-ara[i-1])/(j-i+1);
            ans = max(p,ans);
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