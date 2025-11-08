#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e12+9;
set<int>se;
vector<int>v,fa;
map<int,int>dp;
//vector<int>v;

int bit_set(int x){
    return __builtin_popcountll(x);
}
int ans = 1e18;
int n;
map<int,int>mp;
void find(int x,int i,int c){
    se.insert(x);
    mp[x] = c;
    // ans = min(c+bitset(n-x),ans)
    if(i == fa.size()){
        return;
    }
    find(x,i+1,c);
    find(x+fa[i],i+1,c+1);
    // se.insert(x);
    // se.insert(x+fa[i]);
}
void test(int tt){
    cin>>n;
    int ans = 1e18;
    for(auto x: se){
        ans = min(ans,(bit_set(n-x)+mp[x]));
    }
    cout<<ans<<endl;
    //cout<<n<<endl;
    //cout<<se.size()<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin>>t;
    int fac = 1;
    int i = 1;
    while(fac < N){
        if(i > 2){
            fa.push_back(fac);
        }
        i++;
        fac = fac*i;
    }
    // int p = 1;
    // while(p <= N){
    //     se.insert(p);
    //     p = p*2;
    // }
    int p = 0;
    find(p,p,p);
    // for(auto x: se){
    //     //cout<<x<<endl;
    // }
    //cout<<se.size();
    for(i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}