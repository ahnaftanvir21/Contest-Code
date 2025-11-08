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
    int n,x;
    cin>>n>>x;
    string st;
    cin>>st;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(st[i] == '#'){
            cnt++;
        }
    }
    if(cnt == 0 || x == 1 || x == n){
        cout<<"1\n";
    }
    else{
        int cnt = 0;
        if(st[x] == '#' || st[x-2] == '#'){
            cout<<min(x,(n-x)+1)<<endl;
        }
        else{
            int cnt1 = 0;
            int p = x;
            while(st[p]!= '#' && p < n){
                p++;
            }
            cnt1 = (n-p)+1;
            p = x-2;
            while(st[p] != '#' && p >= 0){
                p--;
            }
            int cnt2 = p+2;
            if(cnt1 > cnt2){
                if(x < cnt1){
                    cout<<x<<endl;
                }
                else{
                    cout<<cnt1<<endl;
                }
            }
            else{
                if((n-x)+1 < cnt2){
                    cout<<n-x+1<<endl;
                }
                else{
                    cout<<cnt2<<endl;
                }
            }

            // cout<<cnt1<<" "<<cnt2<<endl;
            // cout<<max(cnt2,cnt1)<<endl;
        }
        
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