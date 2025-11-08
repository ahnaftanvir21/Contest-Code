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
    char st1[200005];
    char st2[200005];
    cin>>st1;
    cin>>st2;
    ll vall,valr;
    vall=valr=0;
    ll j = 0;
    ll i;
    ll f = 0;
    ll l1 = strlen(st1);
    ll l2 = strlen(st2);
    for(i = 0;i < l1;){
        ll cnt1 = 0,cnt2=0;
        if(st1[i] == st2[j]){
            char c = st1[i];
            while(st1[i] == c && i < l1){
                i++;
                cnt1++;
            }
            while(st2[j] == c && j < l2){
                j++;
                cnt2++;
            }
            if(cnt2 < cnt1 || cnt2 > cnt1*2){
                f = 1;
                break;
            }
        }
        else{
            f = 1;
            break;
        }
    }
    if(i != l1 || j != l2){
        f = 1;
    }
    if(f == 1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
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