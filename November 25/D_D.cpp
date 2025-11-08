#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int cnt = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(s1[i] == s2[i]){
            cnt++;
        }
        else if(s1[i] > s2[i]){
            cnt = 0;
        }
        else{
            cnt++;
            ans+= cnt * (n-i);
            cnt = 0;
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
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}