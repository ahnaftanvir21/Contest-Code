#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    bool f = true;
    cin>>n;
    double sum = 0;
    for(int i = 0;i < n;i++){
        double x;
        cin>>x;
        sum+=x;
        if(sum / (double)(i+1) < 40.0){
            f = false;
        }
    }
    if(f){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
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