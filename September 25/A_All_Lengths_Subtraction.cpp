#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+1];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    bool f = true;
    for(int i = 1;i <= n;i++){
        int p = (n-i)+1;
        int mx = 0;
        int cnt = 0;
        for(int j = 0;j < n;j++){
            if(ara[j] >= p){
                cnt++;
                mx = max(mx,cnt);
            }
            else{
                cnt = 0;
            }
        }
        if(mx < i){
            f = false;
        }
    }
    if(f){
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