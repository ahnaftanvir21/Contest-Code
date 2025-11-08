#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
void test(int tt){
    int k;
    cin>>k;
    int n = 10;
    int ara[n] = {1,1,1,1,1,1,1,1,1,1};
    int mul = 1;
    while(mul < k){
        for(int i = 0;i < n;i++){
            mul = mul/ara[i];
            ara[i]++;
            mul = mul*ara[i];
            if(mul >= k){
                break;
            }
        }
    }
    string st = "codeforces";
    for(int i = 0;i < n;i++){
        while(ara[i]--){
            cout<<st[i];
        }
    }
    cout<<endl;
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