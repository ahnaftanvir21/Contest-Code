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
    int ara[n+1];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    for(int i = 1;i < n;i++){
        ara[i] += ara[i-1]; 
        //cout<<ara[i]<<" ";
    }
    //cout<<endl;
    int s1,s2,s3;
    int ansl,ansr;
    ansl = ansr = 0;
    for(int l = 0;l < n-2;l++){
        for(int r = l+1;r < n-1;r++){
            s1 = ara[l]%3;
            s2 = (ara[r]-ara[l])%3;
            s3 = (ara[n-1]-ara[r])%3;
            if((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)){
                ansl = l+1;
                ansr = r+1;
                // cout<<l<<" "<<r<<endl;
                // cout<<s1<<s2<<s3<<endl;
            }
        }
    }
    cout<<ansl<<" "<<ansr<<endl;
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