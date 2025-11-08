#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    cout<<n<<endl;
    cout.flush();
    int ans;
    for(int i = 1;i <= n;i++){
        cout<<i<<" "<<i<<endl;
    }
    int sum;
    cin>>sum;
    int mt = 500*(n*(n+1))/2;
    cout<<"! "<<sum-mt<<endl;
    cout.flush();
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