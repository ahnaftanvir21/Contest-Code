#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    ///first black;
    int a1,b1,a2,b2;
    cin>>a1>>b1,a2>>b2;
    ///left side;
    int ls = -1,le = -1;
    if(a1 <= x1 && a2>= x1){
        ls = max(b1,y1);
        le = min(b2,y2);
    }
    cout<<ls<<le<<endl;
    cin>>a1>>b1>>a2>>b2;
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