#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n,q;
    cin>>n;
    string s;
    cin>>s;
    int c1,c2;
    c1 = c2 = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '+'){
            c1++;
        }
        else{
            c2++;
        }
    }
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(c1 == c2){
            cout<<"YES\n";
            continue;
        }
        if(a == b){
            cout<<"NO\n";
            continue;
        }
        int l = (a*b)/__gcd(a,b);
        int x = l/a,y = l/b;
        if(abs(c2-c1)%abs(y-x) == 0){
            int p = abs(c2 - c1)/abs(y-x);
            if((x+y)*p > n){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else cout<<"NO\n";
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