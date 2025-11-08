#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,m;
    cin>>n>>m;
    if(n <= 2 && m <= 2){
        cout<<"NO\n";
    }
    else if(n == 1 || m == 1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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