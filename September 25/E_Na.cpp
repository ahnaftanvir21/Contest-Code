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
int points[101] = {0};
int sol(int n){
    vector<int>v;
    int mx = 0;
    for(int i = 0;i < n;i++){
        string st;
        int a,b;
        cin>>st>>a>>b;
        mx = max(a,mx);
        v.push_back(b);
    }
    sort(all(v));
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    //cout<<mx<<" "<<points[v[0]]<<" "<<points[v[1]]<<" "<<points[v[2]]<<endl;
    int total;
    if(n == 1){
        total = 10*mx+ 2*points[v[0]];
    }
    else if(n == 2){
        total = 10*mx+ 2*points[v[0]]+points[v[1]];
    }
    else{
        total = 10*mx + 2*points[v[0]]+points[v[1]]+ points[v[2]];
    }
    //cout<<total<<endl;
    return total;
}
void testCases (int tt)
{
   
    int p = 40;
    for(int i = 11;i <= 50;i++){
        points[i] = p;
        p--;
    }
    p = 50;
    for(int i = 6;i <= 10;i++){
        points[i] = p; 
        p-=2;
    }
    points[1] = 80;
    points[2] = 68;
    points[3] = 62;
    points[4] = 57;
    points[5] = 53;
    int n;
    cin>>n;
    int r0 = sol(n);
    cin>>n;
    int r1 = sol(n);
    cin>>n;
    int r2 = sol(n);
    int r = 4*r0+3*r1+2*r2;
    cout<<r<<endl;
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