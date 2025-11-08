#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll long long
#define int long long
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const int MX = 2e5+123;
const ll infLL = 9000000000000000000;
const int MOD = 1e9+7;
bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}
 
void testCases (int tt)
{
    int n;
    cin>>n;
    cout<<n<<endl;
    vector<pair<int,int>>v,rv,vc;
    for(int i = 0;i < n;i++){
        int l,r;
        cin>>l>>r;
        vc.push_back({l,r});
        v.push_back({l,r});
        rv.push_back({r,l});
    }
    sort(all(v));
    sort(rall(rv));
    // for(int i = 0;i < n;i++){
    //     cout<<rv[i].first<<" "<<rv[i].second<<endl;
    // }
    // cout<<endl;
}

 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}