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
    int p = 1;
    int mx = 0;
    map<int,int>mp,mp1,selected;
    for(int i = 1;i <= n;i++){
        cout<<"? "<<i<<" "<<n<<" ";
        for(int j = 1;j <= n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
        int x;
        cin>>x;
        mp1[i] = mp[i] = x;
        if(x > mx){
            p = i;
            mx = x;
        }
    }
    vector<int>ans;
    for(int i = 1;i <= n;i++){
        int x = mp1[1];
        int ind = 1;
        for(int j = 1;j <= n;j++){
            if(mp1[j] > x){
                x = mp1[j];
                ind = j;
            }
        }
        ans.push_back(ind);
        mp1[ind] = 0;
    }
    // for(int i = 0;i < n;i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    int k = mp[ans[0]];
    selected[ans[0]] = 1;
    vector<int>a;
    a.push_back(ans[0]);
    int crr = ans[0];
    for(int i = 1;i < n;i++){
        if(mp[crr]-1 != mp[ans[i]])continue;
        cout<<"? "<<crr<<" 2 "<<ans[i]<<" "<<crr<<endl;
        
        int x;
        cin>>x;
        if(x == 2){
            a.push_back(ans[i]);
            crr = ans[i];
        }
    }
    cout<<"! "<<a.size()<<" ";
    for(int i = 0 ;i < a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
 
 
int32_t main()
{
    //fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}