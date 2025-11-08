#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll long long
//#define int long long
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
    int n,m,k;
    cin>>n>>m>>k;
    char st[n+1][m+1];
    int g = 0;
    int ara[n+1][m+1];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>st[i][j];
            if(st[i][j] == 'g'){
                ara[i][j] = 1;
                g++;
            }
            else{
                ara[i][j] = 0;
            }
            if(i == 0 && j == 0){
                ara[i][j] = ara[i][j];
            }
            else if(i == 0 && j > 0){
                ara[i][j] += ara[i][j-1];
            }
            else if(i > 0 && j == 0){
                ara[i][j]+=ara[i-1][j];
            }
            else{
                ara[i][j] += ara[i-1][j]+ara[i][j-1]-ara[i-1][j-1];
            }
            //cout<<ara[i][j]<<" ";
        }
        //cout<<endl;
    }
    int an = 0;
    //cout<<endl;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int p = (k*2-1)/2;
            int q = k*2 -1;
            int cx,cy,b,c;
            cx = i+p;
            cy = j+p;
            int a = ara[min(cx,n-1)][min(cy,m-1)];
            if(cy-q < 0){
                b = 0;
            }
            else b = ara[min(cx,n-1)][(cy-q)];
            //cout<<b;
            if(cx-q < 0){
                c = 0;
            }
            else c = ara[(cx-q)][min(cy,m-1)];
            int bx,by,d;
            bx = i-(p+1);
            by = j-(p+1);
            if(bx < 0 || by < 0){
                d = 0;
            }
            else{
                d = ara[bx][by];
            }
            int ans;
            if(cx - q < 0){
                ans = a-b;
            }
            else if(cy - q < 0){
                ans = a-c;
            }
            else{
                ans = a - b - c + d;
            }
            if(st[i][j] == '.'){
                an = max(an,g-ans);
            }
            //cout<<ans<<" ";
        }
        //cout<<endl;
    }
    cout<<an<<endl;
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