#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    int s[n+1],p[n+1];
    for(int i = 0;i < n;i++){
        cin>>p[i];
    }
    for(int i = 0;i < n;i++){
        cin>>s[i];
    }
    bool f = true;
    int a[n+1];
    for(int i = 0;i < n;i++){
        int g = __gcd(s[i],p[i]);
        a[i] = (s[i]*p[i] / g);
    }
    int g = a[0];
    for(int i = 0;i < n;i++){
        g = __gcd(a[i],g);
        if(p[i] != g){
            f = false;
        }
    }
    g = a[n-1];
    for(int i = n-1;i >= 0;i--){
        g = __gcd(a[i],g);
        if(g != s[i]){
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