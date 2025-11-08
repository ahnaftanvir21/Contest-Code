#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n == k*2){
        cout<<"NO\n";
        return;
    }
    string p = s.substr(0,k);
    string r = s.substr(n-k,k);
    reverse(r.begin(),r.end());
    if(p == r){
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
    //prec();
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}