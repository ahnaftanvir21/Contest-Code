#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,s;
    cin>>n>>s;
    int ara[n+1];
    int sum = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum > s || sum+1 == s){
        for(int i = 0;i < n;i++){
            if(ara[i] == 0){
                cout<<ara[i]<<" ";
            }
        }
        for(int i = 0;i < n;i++){
            if(ara[i] == 2){
                cout<<ara[i]<<" ";
            }
        }
        for(int i = 0;i < n;i++){
            if(ara[i] == 1){
                cout<<ara[i]<<" ";
            }
        }
        cout<<endl;
    }
    else{
        cout<<"-1\n";
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