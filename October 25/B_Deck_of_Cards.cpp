#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    int z,o,t;
    z = o = t = 0;
    for(int i = 0;i < k;i++){
        if(st[i] == '0'){
            z++;
        }
        if(st[i] == '1'){
            o++;
        }
        if(st[i] == '2'){
            t++;
        }
    }
    char ans[n+2];
    for(int i = 0;i < n;i++){
        ans[i] = '+';
    }
    for(int i = 0;i < z;i++){
        ans[i] = '-';
    }
    int p = o;
    int i = n-1;
    while(p--){
        ans[i] = '-';
        i--;
    }
    for( i = z;i < min(n,z+t);i++){
        if(ans[i] == '+'){
            ans[i] = '?';
        }
    }

    int a = n-o-1;
    //cout<<t<<endl;
    if(n-z-o <= t){
        for(i = 0;i < n;i++){
            ans[i] = '-';
        }
    }
    while(t-- && a > 0){
        if(ans[a] == '+'){
            ans[a] = '?';
        }
        a--;
    }
    for(i = 0;i < n;i++){
        cout<<ans[i];
    }
    cout<<endl;
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