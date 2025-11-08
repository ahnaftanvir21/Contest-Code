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
    int n;
    cin>>n;
    double px,py,qx,qy;
    cin>>px>>py>>qx>>qy;
    //cout<<px<<" "<<py<<" "<<qx<<" "<<qy<<endl;
    //cout<<px-qx<<endl;
    double dis = sqrt(abs(px-qx)*abs(px-qx) + abs(py-qy) *abs(py-qy));
    int ara[n+1];
    int mx = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        mx = max((int)ara[i],mx);
    }
    sort(ara,ara+n);
    //double sum = 0;
    //cout<<total<<endl;
    //cout<<dis<<endl;
    vector<double>a;
    for(int i = 0;i < n;i++){
        a.push_back(ara[i]);
    }
    a.push_back(dis);
    sort(all(a));
    double sum = accumulate(a.begin(),a.end()-1,0.0);
    double large = a.back();
    if(n == 1){
        if(abs(dis-ara[0]) < eps){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        if(sum+eps > large){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
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