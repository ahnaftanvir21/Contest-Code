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
    int n,k;
    cin>>n>>k;
    map<int,int>mp,mxi;
    int ara[n+1];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        mp[ara[i]]++;
    }
    bool f = true;
    for(int i = 0;i <= n;i++){
        if(mp[i] == 0){
            continue;
        }
        if(mp[i] % k != 0){
            f = false;
        }
        else{
            mxi[i] = mp[i] / k;
        }
    }
    if(f){
        int l,r;
        l = 0;
        map<int,int>cnt;
        l = 0;
        int ans =0;
        for(r = 0;r < n;r++){
            cnt[ara[r]]++;
            if(cnt[ara[r]] <= mxi[ara[r]]){
                int len = (r-l)+1;
                ans += len;
                //cout<<l<<" "<<r<<" "<<len<<endl;
            }
            else{
                while(l <= r && cnt[ara[r]] > mxi[ara[r]]){
                    //cout<<cnt[ara[r]]<<" "<<r<<endl;
                    cnt[ara[l]]--;
                    l++;
                }
                ans+= (r-l)+1;
            }
        }
        cout<<ans<<endl;
    }
    else{
        cout<<"0\n";
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