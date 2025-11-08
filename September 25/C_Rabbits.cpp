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
    string st;
    cin>>st;
    bool safe[n+5] = {false};
    bool potintial[n+5];
    bool savel[n+5];
    for(int i = 0;i < n;i++){
        if(st[i] == '0'){
            if(i == 0 || i == n-1){
                safe[i] = true;
            }
            if(st[i+1] == '0' || st[i-1] == '0') safe[i] = true;
        }
        // if(safe[i]){
        //     cout<<"1";
        // }
        // else{
        //     cout<<"0";
        // }
    }
    //cout<<endl;
    // for(int i = 2;i < n-2;i++){
    //     if(safe[i]){
    //         if(st[i+2] == '0'){
    //             safe[i+2] = true;
    //         }
    //         if(st[i-2] == '0'){
    //             safe[i-2] = true;
    //         }
    //     }
    // }
    for(int i = 0;i < n;i++){
        if(st[i] == '0' && safe[i]){
            if(i < n-2 && st[i+2] == '0' && !safe[i+2]){
                safe[i+2] = true;
            }
        }
        // if(safe[i]){
        //     cout<<"1";
        // }
        // else{
        //     cout<<"0";
        // }
    }
    //cout<<endl;
    for(int i = n-1;i > 1;i--){
        if(st[i] == '0' && safe[i]){
            if(st[i-2] == '0' && !safe[i-2]){
                safe[i-2] = true;
            }
        }
    }
    //cout<<endl;
    for(int i = 0;i < n-2;i++){
        if(st[i] == '0' &&!safe[i]){
            if(st[i+2] == '0' && !safe[i+2]){
                safe[i] = true;
                safe[i+2] = true;
            }
        }
    }
    bool f = true;
    for(int i = 0;i < n;i++){
        if(st[i] == '0' && !safe[i]){
            f = false;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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