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
    cin >> testcases;
    int ara[21];
    ara[0] = 1;
    for(int i = 1;i <= 20;i++){
        ara[i] = ara[i-1]*3;
        //cout<<ara[i]<<endl;
    }
    int ara1[21];
    ara1[0] = 3;
    for(int i = 1;i < 20;i++){
        ara1[i] = ara[i+1]+i*ara[i-1];
        //cout<<ara1[i]<<endl;
    }
    for(int i = 0;i < 20;i++){
        cout<<ara[i]<<" "<<ara1[i]<<endl;
    }
    for (int tt = 1; tt <= testcases; tt++)
    {
        int n;
        cin>>n;

        int ans = 0;
        while(n > 0){
            for(int i = 0;i < 20;i++){
                if(n < ara[i]){
                    n = n-ara[i-1];
                    ans+=ara1[i-1];
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}