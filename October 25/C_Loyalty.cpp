#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n,x;
    cin>>n>>x;
    //cout<<"case: "<<tt<<endl;
    int ara[n+1];
    int p = 0;
    vector<int>v,vx;
    int ans = 0;
    vector<int>final;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        if(ara[i] < x){
            p++;
            v.push_back(ara[i]);
        }
        else{
            ans+=ara[i];
            final.push_back(ara[i]);
        }
    }
    if(p == 0){
        cout<<ans<<endl;
        for(int i = 0;i < n;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int sum = 0;
    for(int i = 0;i < v.size();i++){
        if(sum+v[i] >= x){
            cnt++;
        }
        sum+=v[i];
        sum %= x;
    }
    cnt = min(cnt,(long long)(v.size()));
    int i = v.size()-1;
    int r = v.size()-cnt;
    while(cnt--){
        ans+=v[i];
        i--;
    }
    int l = 0;
    int m = r;
    //cout<<l<<" "<<m<<endl;
    sum = 0;
    for(int i = 0;i < m;i++){
        sum+=v[i];
        final.push_back(v[i]);
        while(sum+v[r] >= x && r < v.size()){
            sum+=v[r];
            sum%=x;
            final.push_back(v[r]);
            r++;
        }
    }
    sum = 0;
    int test = 0;
    cout<<ans<<endl;
    for(int i = 0;i < final.size();i++){
        cout<<final[i]<<" ";
        sum+=final[i];
        if(sum >= x){
            sum%=x;
            test+=final[i];
        }
    }
    cout<<endl;
    //cout<<test<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}