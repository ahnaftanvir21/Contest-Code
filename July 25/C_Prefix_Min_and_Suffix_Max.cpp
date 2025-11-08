#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ara[n+1];
    int ans[n+1];
    for(int i = 0;i < n;i++){
      cin>>ara[i];
      ans[i] = 0;
    }
    int mn = 1e9+9;
    for(int i = 0;i < n;i++){
        if(ara[i] < mn){
            ans[i] = 1;
        }
        mn = min(ara[i],mn);
    }
    int mx = 0;
    for(int i = n-1;i >= 0;i--){
        if(ara[i] > mx){
            ans[i] = 1;
        }
        mx = max(mx,ara[i]);
    }
    for(int i = 0;i < n;i++){
      cout<<ans[i];
    }
    cout<<endl;
  }
  return 0;
}