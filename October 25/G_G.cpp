#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(int n){
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void test(int tt){
    int n,k;
    cin>>n>>k;
    if(is_prime(n)){
        if(n > k){
            cout<<k+1<<endl;
        }
        else{
            int p = k-(n-1);
            cout<<n+n*p<<endl;
        }
    }
    else{
        vector<int>div;
        int x = 1;
        for(int i = 2;i*i <= n;i++){
            if(n%i == 0){
                div.push_back(i);
                if(n/i != i){
                    div.push_back(i);
                }
            }
        }
        div.push_back(n);
        sort(div.begin(),div.end());
        int prev = 1;
        int cnt = 0;
        for(int i = 0;i < div.size();i++){
            if(cnt <= k){
                if((div[i]-x)%prev == 0){
                    if(cnt+(div[i]-x)/prev <= k){
                        cnt +=(div[i]-x)/prev;
                        x = div[i];
                        prev = div[i];
                    }
                    else{
                        int p = k-cnt;
                        x = x+p*x;
                        cnt = k;
                    }
                }
            }
            // cout<<cnt<<" ";
            // cout<<x<<endl;
        }
        int ans = x;
        if(cnt < k){
            ans = x+(n*(k-cnt));
        }
        cout<<ans<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}