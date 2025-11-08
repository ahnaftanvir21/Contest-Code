#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n;
        cin>>n;
        ll ara[n+2];
        ll pos[n+2],neg[n+2];
        for(ll i = 1;i <= n;i++){
            cin>>ara[i];
        }
        pos[0] = neg[0] = 0;
        ll apos,aneg;
        apos = aneg = 0;
        for(ll i = 1;i <= n;i++){
            if(ara[i] > 0){
                pos[i] = 1+pos[i-1];
                neg[i] = neg[i-1];
            }
            else{
                pos[i] = neg[i-1];
                neg[i] = 1 + pos[i-1];
            }
            apos += pos[i];
            aneg += neg[i];
        }
        cout<<aneg<<" "<<apos<<endl;
        return 0;
}