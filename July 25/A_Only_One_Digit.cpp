#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ans = 100;
    while(n > 0){
        ans = min(ans,n%10);
        n = n/10;
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