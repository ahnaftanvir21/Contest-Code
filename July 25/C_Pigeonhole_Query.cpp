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
    int n,q;
    cin>>n>>q;
    int ans = 0;
    //cout<<n<<" "<<q<<endl;
    int nest[n+2],peg[n+2];
    for(int i = 1;i <= n;i++){
        nest[i] = 1;
        peg[i] = i;
    }
    while(q--){
        int x;
        cin>>x;
        if(x == 2){
            cout<<ans<<endl;
        }
        else{
            int p,h;
            cin>>p>>h;
            int crn = peg[p];
            // nest[crn]--;
            //nest[h]++;
            peg[p] = h;
            if(nest[crn] == 2){
                ans--;
            }
            nest[crn]--;
            if(nest[h] == 1){
                ans++;
            }
            nest[h]++;
        }
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