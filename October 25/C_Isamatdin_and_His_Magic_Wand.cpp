#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    int even = 0,odd = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        if(ara[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even == 0 || odd == 0){
        for(int i = 0;i < n;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }
    else{
        sort(ara,ara+n);
        for(int i = 0;i < n;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }
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