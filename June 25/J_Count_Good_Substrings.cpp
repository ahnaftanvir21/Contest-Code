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
    int even[l+1] = {0};
    int odd[l+1] = {0};
    int a,b;
    a = b = 0;
    int e,o;
    e = o = 0;
    for(int i = 1;i <= l;i++){
        if(st[i-1] == 'a'){
            a++;
            if(b % 2 == 0){
                even[i] = odd[i-(b+1)];
                odd[i] = even[i-(b+1)]+1;
            }
            else{
                even[i] = even[i-(b+1)];
                odd[i] = odd[i-(b+1)]+1;
            }
            b = 0;
        }
        else if(st[i-1] == 'b'){
            b++;
            if(a % 2 == 0){
                even[i] = odd[i-(a+1)];
                odd[i] = even[i-(a+1)]+1;
            }
            else{
                even[i] = even[i-(a+1)];
                odd[i] = odd[i-(a+1)]+1;
            }
            a = 0;
        }
        //cout<<"odd: "<<odd[i]<<" even: "<<even[i]<<endl;
        e+=even[i];
        o+=odd[i];
    }
    cout<<e<<" "<<o<<endl;
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