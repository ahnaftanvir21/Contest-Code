#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int x,y,z;
    cin>>x>>y>>z;
    //cout<<x&y<<" "
    if((x & y) == (y & z) && (y&z) == (x&z)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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