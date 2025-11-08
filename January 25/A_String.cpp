#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char st[500];
        cin>>st;
        int l = strlen(st);
        int ans = 0;
        for(int  i = 0;i < l;i++){
            if(st[i] == '1'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}