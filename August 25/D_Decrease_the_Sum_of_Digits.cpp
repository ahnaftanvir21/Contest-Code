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
    int n,sum;
    cin>>sum;
    n = 0;
    int p = 0;
    for(int i = 0;i < st.size();i++){
        n = n*10 + (st[i]-'0');
        p += st[i]-'0';
    }
    int pl = -1;
    int num = 0;

    for(int i = 0;i < st.size();i++){
        if(num+(st[i] - '0') < sum){
            num+= (st[i]-'0');
            pl = i;
        }
        else{
            break;
        }
    }
    int nr = 0;
    for(int i = 0;i < st.size();i++){
        if(i <= pl){
            nr = nr * 10 + (st[i]-'0');
        }
        else{
            nr = nr*10;
        }
    }
    
    int sm = 0;
    int ks = 1;
    for(int i = pl+1;i < st.size();i++){
        sm = sm*10 + (st[i]-'0');
        ks = ks*10;
    }
    //cout<<sm<<" "<<ks<<endl;
    if(p <= sum){
        cout<<"0\n";
    }
    else{
        cout<<nr+ks-n<<endl;
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