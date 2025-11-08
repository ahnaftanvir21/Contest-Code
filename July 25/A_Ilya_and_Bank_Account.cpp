#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    if(n >= 0){
        cout<<n<<endl;
    }
    else{
        vector<int>ans;
        int p = abs(max(n%10,(n/10)%10));
        if(min(p*-1,n/100) < 0){
            cout<<"-";
        }
        if(n <= -100){
            cout<<abs(n/100);
        }
        cout<<p<<endl;
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