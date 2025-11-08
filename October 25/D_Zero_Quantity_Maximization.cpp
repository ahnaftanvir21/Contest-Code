#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int a[n+2],b[n+2];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int i = 0;i < n;i++){
        cin>>b[i];
    }
    int bothzero = 0;
    map<pair<int,int>,int>mp;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == 0 && b[i] == 0){
           bothzero++;
           continue;
        }
        if(a[i] == 0 && b[i] != 0){
            continue;
        }
        
        int g = __gcd(a[i],b[i]);
        mp[{b[i]/g,a[i]/g}]++;
        ans = max(ans, mp[{b[i]/g,a[i]/g}]);
    }
    cout<<bothzero+ans<<endl;
    //cout<<(__gcd(0,5))<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    ///cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}