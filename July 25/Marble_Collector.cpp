#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int m,n;
    cin>>n>>m;
    int cnt = 0;
    map<int,int>mp;
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        if(mp[x] == 0){
            mp[x] = 1;
            cnt++;
        }
    }
    cout<<m-cnt<<endl;
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