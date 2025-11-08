#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '1'){
            if(r >= x){
                r = r-d;
            }
            ans++;
        }
        else{
            if(r < x){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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