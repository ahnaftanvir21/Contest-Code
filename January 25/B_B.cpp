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
    
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    // cin >> testcases;
    // for (int tt = 1; tt <= testcases; tt++)
    // {
    //     testCases (tt);
    // }
    ll n,m;
    cin>>n>>m;
    char a[100][100],b[100][100];
    for(ll i = 0;i < n;i++){
        cin>>a[i];
        //cout<<a[i]<<endl;
    }
    for(ll i = 0;i < m;i++){
        cin>>b[i];
    }
    ll f = 1;
    for(ll i = 0;i < n;i++){
        for(ll j = 0;j < n;j++){
            if(i + (m-1) < n && j + (m-1) < n){
                //cout<<a[i][j]<<endl;
                ll c = 1;
                for(ll k = 0;k < m;k++){
                    for(ll l = 0;l < m;l++){
                        if(a[i+k][j+l] != b[k][l]){
                            c = 0;
                            break;
                        }
                    }
                    if(c == 0){
                        break;
                    }
                }
                if(c == 1){
                    cout<<i+1<<" "<<j+1<<endl;
                    f = 0;
                    break;
                }
            }
        }
        if(f == 0){
            break;
        }
    }
    return 0;
}