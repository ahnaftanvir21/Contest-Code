#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    string st;
    cin>>st;
    int l = st.size();
    int p = l-1;
    int a = 0;
    while(st[p] == '0'){
        a++;
        p--;
    }
    int cnt = 0;
    for(int i = 0;i < p;i++){
        if(st[i] != '0'){
            cnt++;
        }
    }
    cout<<a+cnt<<endl;
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