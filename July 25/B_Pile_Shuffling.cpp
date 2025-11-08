#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    int hand = 0;
    int cost = 0;
    vector<pair<int,int>>prev,nex;

    for(int i = 0;i< n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a > c){
            cost+=a-c;
        }
        if(b > d){
            cost+= (b-d)+min(a,c);
        }
    }
    cout<<cost<<endl;
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