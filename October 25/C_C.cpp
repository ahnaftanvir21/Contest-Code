#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    string s;
    cin>>s;
    int l,r;
    l = 0;
    r = s.size()-1;
    while(s[l] == 'a' && s[r] == 'a'){
        l++;
        r--;
    }
    bool f = true;
    while(s[r] == 'a'){
        r--;
    }
    while(s[l] == s[r] && l <= r){
        l++;
        r--;
    }
    if(l < r){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
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