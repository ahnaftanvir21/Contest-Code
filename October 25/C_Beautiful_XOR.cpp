#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int a,b;
    cin>>a>>b;
    // if(b > a){
    //     cout<<"-1\n";
    //     return;
    // }
    int pow[45+2];
    pow[0] = 1;
    for(int i = 1;i <= 45;i++){
        pow[i] = pow[i-1]*2;
    }
   vector<int>va;
   vector<int>vb;
    while(a > 0){
        if(a%2 == 0){
            va.push_back(0);
        }
        else{
           va.push_back(1);
        }
        //cout<<a<<endl;
        a = a/2;
    }
    while(b > 0){
        if(b%2 == 0){
            vb.push_back(0);
        }
        else{
            vb.push_back(1);
        }
        b = b/2;
    }
    if(vb.size() > va.size()){
        cout<<"-1"<<endl;
        return;
    }
    if(va.size() > vb.size()){
        while(va.size() > vb.size()){
            vb.push_back(0);
        }
    }
    // reverse(va.begin(),va.end());
    // reverse(vb.begin(),vb.end());
    vector<int>ans;
    for(int i = 0 ;i < va.size();i++){
        //cout<<va[i]<<" "<<vb[i]<<endl;
        if(va[i] != vb[i]){
            ans.push_back(pow[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i];
        if(i != ans.size()-1){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
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