#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    set<int>odd,even;
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        if(x%2 == 0){
            odd.insert(x);
        }
        else{
            even.insert(x);
        }
    }
    if(odd.size() > 1){
        int i = 0;
        for(auto x: odd){
            cout<<x<<" ";
            i++;
            if(i == 2){
                break;
            }
        }
    }
    else if(even.size() > 1){
        int i = 0;
        for(auto x: even){
            cout<<x<<" ";
            i++;
            if(i == 2){
                break;
            }
        }
    }
    else{
        cout<<"-1";
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