#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    int mn = ara[0];
    int mx = ara[0];
    for(int i  = 0;i < n;i++){
        mn = min(mn,ara[i]);
        mx = max(mx,ara[i]);
    }
    cout<<"Min Value: "<<mn<<endl;
    cout<<"Max Value: "<<mx<<endl;
    return 0;
}