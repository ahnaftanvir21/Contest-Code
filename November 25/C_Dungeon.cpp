#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
void test(int tt){
    int n,m;
    cin>>n>>m;
    int a[n],b[m],c[m];
    map<int,int>mp;
    o_set<int>se,sp;
    vector<pair<int,int>>v,vz;
    vector<int>vc;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        mp[a[i]]++;
        se.insert(a[i]);
    }
    for(int i = 0;i < m;i++){
        cin>>b[i];
    }
    for(int i = 0;i < m;i++){
        cin>>c[i];
        if(c[i] > 0){
            v.push_back({b[i],c[i]});
        }
        else{
           //sp.insert(b[i]);
           vc.push_back(b[i]);
        }
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i = 0;i < v.size();i++){
        //cout<<v[i].first<<" "<<v[i].second<<" ";
        int niche = se.order_of_key(v[i].first);
        if(niche == n){
            break;
        }
        int next_boro = *se.find_by_order(niche);
        ans++;
        if(mp[next_boro] == 1){
            se.erase(next_boro);
        }
        mp[next_boro]--;
        int curr_boro = max(next_boro,v[i].second);
        mp[curr_boro]++;
        if(mp[curr_boro] == 1){
            se.insert(curr_boro);
        }
        //cout<<next_boro<<" "<<curr_boro<<endl;
    }
    int cnt = 0;
    vector<int>vk;
    for(auto x:se){
        while(mp[x]--){
            vk.push_back(x);
        }
    }
    // for(int i = 0;i < vk.size();i++){
    //     cout<<vk[i]<<" ";
    // }
    // cout<<endl;
    // for(int i = 0;i < vc.size();i++){
    //     int p = sp.order_of_key(vc[i]+1);
    //     cout<<vc[i]<<" "<<p<<endl;
    //     if(p != 0){
    //         ans++;
    //         int x = *sp.find_by_order(0);
    //         sp.erase(x);
    //     }
    // }
    sort(vc.begin(),vc.end());
    int i = 0,j = 0;
    while(i < vk.size() && j < vc.size()){
        //cout<<
        if(vc[j] <= vk[i]){
            i++;
            j++;
            ans++;
        }
        else{
            i++;
        }
    }
    //cout<<endl;
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