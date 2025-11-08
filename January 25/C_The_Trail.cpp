#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll l = n+m-2;
        char st[l+1];
        cin>>st;
        ll ara[n+1][m+1];
        for(ll i = 0;i < n;i++){
            for(ll j = 0;j < m;j++){
                cin>>ara[i][j];
            }
        }
        ll x,y;
        x = y = 0;
        for(ll i = 0;i < l;i++){
            if(st[i] == 'D'){
                ll sum = 0;
                for(ll j = 0;j < m;j++){
                    sum+= ara[x][j];
                }
                ara[x][y] = (-1) * sum;
                x++;
            }
            else {
                ll sum = 0;
                for(ll j = 0;j < n;j++){
                    sum+= ara[j][y];
                }
                ara[x][y] = (-1) * sum;
                y++;
            }
        }
        ll sum = 0;
        for(ll i = 0;i < m;i++){
            sum+=ara[n-1][i];
        }
        ara[n-1][m-1] = (-1) * sum;
        for(ll i = 0;i < n;i++){
            for(ll j  = 0;j < m;j++){
                cout<<ara[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}