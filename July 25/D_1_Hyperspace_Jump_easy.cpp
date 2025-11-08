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
    int m;
    cin>>m;
    map<double,int>mp;
    vector<double>v;
    for(int j = 0;j < m;j++){
        string st;
        cin>>st;
        int mul = 1;
        int n1 = 0;
        int i;
        for( i = 1;i < st.size();i++){
            if(st[i] == '+'){
                break;
            }
            n1 = n1*mul+(st[i]-'0');
            mul = mul*10;
        }
        //cout<<n1<<" ";
        i++;
        int n2 = 0;
        mul = 1;
        while(st[i] != ')'){
            n2 = n2*mul+(st[i] - '0');
            mul = mul*10;
            i++;
        }
        //cout<<n2<<" ";
        i+=2;
        int div = 0;
        mul = 1;
        while(i < st.size()){
            div = div*mul + (st[i] - '0');
            i++;
            mul = mul*10;
        }
        //cout<<div<<endl;
        double p = ((double) n1 + (double) n2) / (double)div;
        mp[p]++;
        v.push_back(p);
    }
    for(int i = 0;i < m;i++){
        cout<<mp[v[i]]<<" ";
    }
    cout<<endl;
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