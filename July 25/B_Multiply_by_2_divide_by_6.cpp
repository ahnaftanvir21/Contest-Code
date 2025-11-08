#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int cnt2 = 0,cnt3 = 0;
    while(n%2 == 0){
        cnt2++;
        n = n/ 2;
    }
    while(n%3 == 0){
        cnt3++;
        n= n/3;
    }
    //cout<<cnt2<<" "<<cnt3<<" ";
    if(n > 3 || cnt2 > cnt3){
        cout<<"-1\n";
    }
    else{
        int ans = cnt3 + (cnt3-cnt2);
        cout<<ans<<endl;
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