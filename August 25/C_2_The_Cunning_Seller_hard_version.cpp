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
    // for(int i = 0;i < 20;i++){
    //     //cout<<ara[i]<<" "<<ara1[i]<<endl;
    // }
    for (int tt = 1; tt <= testcases; tt++)
    {
        int n,k;
        cin>>n>>k;
        //cout<<n<<k<<endl;
        int ans = 0;
        map<int,int>mp;
        int cnt = 0;
        while(n > 0){
            for(int i = 0;i < 20;i++){
                if(n < ara[i]){
                    n = n-ara[i-1];
                    ans+=ara1[i-1];
                    mp[i-1]++;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt > k){
            cout<<"-1"<<endl;
        }
        else{
            k = k-cnt;
            for(int i = 19;i >= 0;i--){
                for(int j = i+1;j < 20;j++){
                    int p = ara[j]/ara[i];
                    int total = k;
                    int x = min(mp[j],total/(p-1));
                    mp[j] -= x;
                    mp[i] += x*p;
                    ans -= ara1[j]*x;
                    ans += ara1[i]*(p*x);
                    k = total-((p-1)*x);
                    // if(i == 0 && j == 1){
                    //     cout<<p<<mp[j]<<endl;
                    // }
                    // while(k+1 >= p && mp[j] > 0){
                    //     mp[j]--;
                    //     mp[i]+=p;
                    //     k-=(p-1);
                    //     ans-= ara1[j];
                    //     ans+= ara1[i]*p;
                    // }
                }
            }
            cout<<ans<<endl;
        }
        //cout<<endl;
    }
    return 0;
}