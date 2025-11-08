#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int l,r;
    cin>>l>>r;
    int ans = r-l;
    int x = 10;
    while(x <= r){
        ans +=(r/x) - (l/x);
        x = x * 10;
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