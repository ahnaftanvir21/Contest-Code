#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1][n+1];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin>>ara[i][j];
            cout<<ara[i][j];
        }
        cout<<endl;
    }
}