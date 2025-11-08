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
    int x;
    cin>>x;
    int boro,choto;
    boro = choto = 0;
    for(int i = 0;i < n;i++){
        if(ara[i] > x){
            boro++;
        }
        else if(ara[i] < x){
            choto++;
        }
        else{
            boro++;
            choto++;
        }
    }
    if(boro > 0 && choto > 0){
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