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
int d(int l,int r, int div){
    return r/div - (l-1)/div;
}
void testCases (int tt)
{
    int l,r;
    cin>>l>>r;
    int ans = 0;
    ans+=d(l,r,2);
    ans+=d(l,r,3);
    ans+=d(l,r,5);
    ans+=d(l,r,7);
    ans-=d(l,r,6);
    ans-=d(l,r,10);
    ans-=d(l,r,14);
    ans-=d(l,r,15);
    ans-=d(l,r,21);
    ans-=d(l,r,35);
    ans+=d(l,r,30);
    ans+=d(l,r,42);
    ans+=d(l,r,70);
    ans+=d(l,r,105);
    ans-=d(l,r,210);


    cout<<((r-l+1)-ans)<<endl;
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