#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p;
    cin>>n;
    p = sqrt(n+1);
    if(p*p == n){
        cout<<"N\n";
    }
    else{
        cout<<"Y\n";
    }
    return 0;
}