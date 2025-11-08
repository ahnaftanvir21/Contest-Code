#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool is_it(vector<int>v){
    int n = v.size();
    for(int i = 0;i < n;i++){
        if(v[i] != v[n-i-1]){
            return false;
        }
    }
    return true;
}
void test(int tt){
    //cout<<tt<<endl;
    int n;
    cin>>n;
    if(n == 0){
        cout<<"YES\n";
        return;
    }
    vector<int>v;
    int cnt = 0;
    while(n > 0){
        v.push_back(n%2);
        n = n/2;
    }
    for(int i = 0;i < v.size();i++){
        if(v[i] == 1){
            cnt++;
        }
    }
    if(cnt%2 == 1){
        cout<<"NO\n";
        return; 
    }
    int i = 0;
    while(v[i] == 0){
        i++;
    }
    vector<int>ans;
    for(;i < v.size();i++){
        ans.push_back(v[i]);
    }
    if(is_it(ans)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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