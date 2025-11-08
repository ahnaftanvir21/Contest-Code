#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<int>dq;
    dq.push_back(n);
    for(int i = s.size()-1;i >= 0;i--){
        if(s[i] == 'L'){
            dq.push_back(i);
        }
        else{
            dq.push_front(i);
        }
    }
    for(auto x : dq){
        cout<<x<<" ";
    }
    cout<<endl;
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