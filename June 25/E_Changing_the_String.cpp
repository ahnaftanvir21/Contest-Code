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
    ll n,q;
    cin>>n>>q;
    ll btoa,btoc,ctoa,ctob,bca,cba;
    btoa = btoc = ctoa = ctob = bca = cba = 0;
    string st;
    cin>>st;
    //cout<<st<<endl;
    while(q--){
        char a,b;
        cin>>a>>b;
        if(a == 'b' && b == 'a'){
            btoa++;
            if(ctob > 0){
                ctob--;
                btoa--;
                cba++;
            }
        }
        if(a == 'b' && b == 'c'){
            btoc++;
        }
        if(a == 'c' && b == 'a'){
            ctoa++;
            if(btoc > 0){
                btoc--;
                ctoa--;
                bca++;
            }

        }
        if(a == 'c' && b == 'b'){
            ctob++;
        }
    }
    for(ll i = 0;i < n;i++){
        if(st[i] == 'b'){
            if(btoa > 0){
                st[i] = 'a';
                btoa--;
            }
            else if(cba > 0){
                cba--;
                ctob++;
                st[i] = 'a';
            }
            else if(bca>0){
                bca--;
                st[i] = 'a';
            }
        }
        else if(st[i] == 'c'){
            if(ctoa > 0){
                ctoa--;
                st[i] = 'a';
            }
            else if(bca > 0){
                btoc++;
                bca--;
                st[i] = 'a';
            }
            else if(cba > 0){
                cba--;
                st[i] = 'a';
            }
            else if(ctob > 0){
                ctob--;
                st[i] = 'b';
            }
        }
    }
    cout<<st<<endl;
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