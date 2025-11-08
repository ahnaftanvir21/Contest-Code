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
    vector<char>st;
    for(int i = 1;i <= n;i++){
        cin>>ara[i];
    }
    int i = 1;
    int j = n;
    int cnt = 1;
    while(i <= j){
        if(i == j){
            st.push_back('L');
            break;
        }
        int a = ara[i];
        int b = ara[j];
        if(cnt % 2 == 1){
            if(min(a,b) == a){
                st.push_back('L');
                st.push_back('R');
            }
            else{
                st.push_back('R');
                st.push_back('L');
            }
        }
        else{
            if(min(a,b) == b){
                st.push_back('L');
                st.push_back('R');
            }
            else{
                st.push_back('R');
                st.push_back('L');
            }
        }
        cnt++;
        i++;
        j--;
    }
    for(i = 0;i < st.size();i++){
        cout<<st[i];
    }
    cout<<endl;
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