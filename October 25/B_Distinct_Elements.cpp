#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    int b[n+2];
    for(int i = 0;i < n;i++){
        cin>>b[i];
    }
    int ans[n+2];
    ans[0] = 1;
    int num = 2;
    for(int i = 1;i < n;i++){
        int diff = b[i] - b[i-1];
        if(diff == (i+1)){
            ans[i] = num;
            num++;
        }
        else{
            ans[i] = ans[i-diff];
        }
    }
    for(int i = 0;i < n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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