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
 
 
void testCases (int tt)
{
    int n;
    //cin>>n;
    vector<int>v;
    map<int,string>mp;
    v.push_back(1);
    mp[1] = "I";
    v.push_back(5);
    mp[5] = "V";
    v.push_back(10);
    mp[10] = "X";
    v.push_back(50);
    mp[50] = "L";
    v.push_back(100);
    mp[100] = "C";
    v.push_back(500);
    mp[500] = "D";
    v.push_back(1000);
    mp[1000] = "M";
    int l = v.size();
    for(int i = 0;i < l;i++){
        for(int j = 0;j < i;j++){
            int p = v[i]-v[j];
            int c = p;
            int x = 1;
            while(p > 9){
                x = x*10;
                p = p/10;
            }
            
            if(!mp[v[i]-v[j]].size() && c%x == 0){
                mp[v[i]-v[j]] = mp[v[j]]+mp[v[i]];
                v.push_back(v[i]-v[j]);
                // cout<<x<<" "<<v[i]-v[j]<<endl;
                // cout<<v[i]-v[j]<<" "<<i<<" "<<j<<endl;
            }
        }
    }
    sort(all(v));
    // for(int i = 0;i < v.size();i++){
    //     cout<<v[i]<<" "<<mp[v[i]]<<endl;
    // }
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<string>st;
    for(int i = v.size()-1;i >= 0;i--){
        while(n >= v[i]){
            //cout<<n<<" "<<mp[v[i]]<<endl;
            n = n-v[i];
            st.push_back(mp[v[i]]);
        }
    }
    for(int i = 0;i < st.size();i++){
        cout<<st[i];
    }
    cout<<endl;
    }
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}