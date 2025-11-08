#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
void test(int tt){
    int n;
    cin>>n;
    int low = 1;
    int high = n;
    int ans;
    while(low <= high){
        int mid = (low+high)/2;
        if(((mid*mid)/2) < n){
            low = mid+1;
            ans = mid;
        }
        else{
            high = mid-1;
        }
    }
    if(ans%2 == 1){
        ans++;
    }
    cout<<(ans/2)-1<<endl;
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