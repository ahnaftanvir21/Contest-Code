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
    string st;
    cin>>st;
    int l = st.size();
    double ans = 0;
    for(int i = 0;i < l;i++){
        for(int j = i+1;j < l;j++){
            if(st[i] == 't' && st[j] == 't' && (j-i)+1 >= 3){
                int cnt = 0;
                for(int k = i;k <= j;k++){
                    if(st[k] == 't'){
                        cnt++;
                    }
                }
                double len = (j-i)-1;
                double p = ((double)cnt-2.0)/len;
                ans = max(ans,p);
            }
        }
    }
    //cout<<ans<<endl;
    printf("%0.17lf\n",ans);

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