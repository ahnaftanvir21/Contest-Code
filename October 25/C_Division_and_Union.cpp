#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
   int n;
   cin>>n;
   vector<pair<int,int>>v,v2;
   for(int i = 0;i < n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back({l,r});
        v2.push_back({l,r});
   }
   sort(v.begin(),v.end());
   bool f,ans;
   f = ans = false;
   int a = 1;
   int r = 0;
   map<pair<int,int>,int>mp;
   for(int i = 0;i < n;i++){
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        int l = v[i].first;
        //cout<<f<<" ";
        if(l > r){
            if(!f){
                f = true;
            }
            else{
                ans = true;
                a = 2;
            }
        }
        //cout<<l<<" "<<r<<" "<<f<<endl;
        r  = max(r, v[i].second);
        mp[{v[i].first,v[i].second}] = a;
   }
   if(ans){
        for(int i = 0;i < n;i++){
            cout<<mp[{v2[i].first,v2[i].second}]<<" ";
        }
        cout<<endl;
   }
   else{
        cout<<"-1\n";
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