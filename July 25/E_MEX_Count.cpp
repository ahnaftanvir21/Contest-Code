#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define all(a) (a).begin(),(a).end()

//template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ara[n+1];
    for(int i = 0;i <= n;i++){
        ara[i] = 0;
    }
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        ara[x]++;
    }
    int i = 0;
    //o_set<int>se;
    int mex = 0;
    vector<int>se;
    while(ara[mex] > 0){
      se.push_back(ara[mex]);
      mex++;
      //cout<<ara[i]<<" ";
      //i++;
    }
    //cout<<endl;
    int extras = n-mex;
    sort(all(se));
    for(int k = 0;k <= n;k++){
      if(k <= extras){
        int low = 0;
        int x=-1;
        int high = se.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(se[mid] <= k){
                x = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        cout<<x+2<<" ";
      }
      else{
        cout<<mex - (k-extras)+1<<" ";
      }
    }
    cout<<endl;
  }
  // o_set<int> se;
  // se.insert(4);
  // se.insert(2);
  // se.insert(5);
  // // sorted set se = [2, 4, 5]
  // cout << se.order_of_key(5) << '\n'; // number of elements < 5
  // cout << se.order_of_key(6) << '\n'; // number of elements < 6
  // cout << (*se.find_by_order(1)) << '\n'; // if you imagine this as a 0-indexed vector, what is se[1]?
  return 0;
}