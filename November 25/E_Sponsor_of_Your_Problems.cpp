#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    string l,r;
    cin>>l>>r;
    int ans = 0;
    bool f = false;
    for(int i = 0;i < l.size();i++){
        int p = 0;
        if(l[i] == r[i]){
            if(f)break;
            ans+=2;
            continue;
        }
        if(r[i] < l[i]){
            if(!(r[i] == '0' && l[i] == '9')){
                break;
            }
            ans+=1;
            f = true;
        }
        else if(r[i]-l[i] == 1){
            if(f){
                break;
            }
            ans+=1;
            f = true;
        }
        else if(r[i]-l[i] > 1){
            break;
        }
    }
    cout<<ans<<endl;
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