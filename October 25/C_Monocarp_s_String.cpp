#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ta = 0,tb = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == 'a'){ta++;}
        else tb++;
    }
    int d = ta-tb;
    //cout<<d<<endl;
    map<int,int>mp;
    int pr = 0;
    mp[pr] = -1;
    int ans = n;
    for(int i = 0;i < n;i++){
        pr += s[i] == 'a' ? 1: -1;
        mp[pr] = i;
        if(mp.count(pr-d)){
            ans = min(ans,i-mp[pr-d]);
        }
    }
    if(ans == n){
        cout<<"-1\n";
    }
    else cout<<ans<<endl;
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