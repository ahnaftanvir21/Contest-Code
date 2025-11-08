#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i = 0;i < n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(a[i] != b[i]){
            cnt++;
        }
    }
    if(cnt <= 3){
        cout<<"Sorted\n";
    }
    else{
        cout<<"Failed\n";
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