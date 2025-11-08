#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    if(n == 2 || n == 3){
        cout<<"-1\n";
        return;
    }
    vector<int>even,odd;
    for(int i = 1;i <= n;i+=2){
        odd.push_back(i);
    }
    even.push_back(4);
    even.push_back(2);
    for(int i = 6;i <= n;i+=2){
        even.push_back(i);
    }
    for(int i = even.size()-1;i >= 0;i--){
        cout<<even[i]<<" ";
    }
    for(int i = 0;i < odd.size();i++){
        cout<<odd[i]<<" ";
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