#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+2],b[n+2],sum[n+2],ans[n+2];
        ll extra[n+2] = {0};
        a[0] = b[0] = sum[0] = 0;
        for(ll i = 1;i <= n;i++){
            cin>>a[i];
        }
        for(ll i = 1;i <= n;i++){
            cin>>b[i];
            sum[i] = b[i] + sum[i-1];
        }
        map<ll,ll>ms,me;
        for(ll i = 1;i <= n;i++){
            ll low,high,mid,start,end;
            low = i; high = n;
            end = i;
            while(low <= high){
                mid = (low + high)/2;
                if(a[i] >= (sum[mid] - sum[i-1])){
                    end = mid;
                    //if(i==2)
                    //cout<<mid<<endl;
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            //cout<<end<<"ex: ";
            //cout<<end<<endl;
            if(end == i && a[i] <= b[i]){
                extra[end] += a[i];
            }
            else{
                ms[i]++;
                me[end]++;
            }
            if(sum[end] - sum[i-1] < a[i] && end != n){
                ll ex = a[i]-(sum[end]-sum[i-1]);
                extra[end+1] += ex;
                //cout<<extra[end+1]<<" "<<end+1<<endl;
            }
        }
        ll cnt = 0;
        for(ll i = 1;i <= n;i++){
            cnt+= ms[i];
            //cout<<"cnt: "<<cnt<<" ";
            //cout<<"extra: "<<extra[i]<<" ans: ";
            ans[i] = cnt * b[i] + extra[i];
            cnt -= me[i];
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}