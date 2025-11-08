#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,k;
    cin>>n>>k;
    int ara[n+1];
    int mex = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i = 0;i < n;i++){
        if(ara[i] == mex){
            mex++;
        }
    }
    cout<<min(k-1,mex+1)<<endl;
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