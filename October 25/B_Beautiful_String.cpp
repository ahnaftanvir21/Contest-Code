#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>p;
    for(int i = 0;i < n;i++){
        if(s[i] == '1'){
            p.push_back(i+1);
        }
    }
    cout<<p.size()<<endl;
    for(int i = 0;i < p.size();i++){
        cout<<p[i]<<" ";
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