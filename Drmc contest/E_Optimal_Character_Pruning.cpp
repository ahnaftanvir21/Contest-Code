#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    vector<char>v;
    for(int i = 0;i < n;i++){
        char c;
        cin>>c;
        v.push_back(c);
    }
    map<char,int>mp;
    for(int i = 'a';i <= 'z';i++){
        cin>>mp[i];
    }
    // for(int i = 'a';i <= 'z';i++){
    //     cout<<mp[i]<<" ";
    // }
    // cout<<endl;
    bool pr[n+2];
    for(int i = 0;i < n;i++){
        if(i != n-1 && mp[v[i]] > 0){
            pr[i] = true;
            //cout<<v[i]<<endl;
            mp[v[i]]--;
        }
    }
    for(int i = 0;i < n;i++){
        if(!pr[i]){
            cout<<v[i];
        }
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