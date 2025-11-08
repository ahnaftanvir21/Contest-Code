#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>lt;
    int n;
    cin>>n;
    lt.push_back(1);
    for(int i = 2;i <= n;i++){
        lt.push_back(i*lt.back());
    }
    cout<<lt.back()<<endl;
    return 0;
}