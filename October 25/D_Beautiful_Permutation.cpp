#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    int new_sum;
    cout<<"2 1 "<<n<<endl;
    cin>>new_sum;
    int len =new_sum-((n*(n+1))/2);
    int low = 1,high = n;
    // int ans = 0;
    // int extra = 0;
    int l,r;
    while(low <= high){
        int pa,na;
        int mid = (low+high)/2;
        cout<<"1 1 "<<mid<<endl;
        cin>>pa;
        cout<<"2 1 "<<mid<<endl;
        cin>>na;
        if(pa == na){
           low = mid+1;
        }
        else if(na - pa == len){
            high = mid - 1;
            l = r = mid;
        }
        else{
            int p = na - pa;
            l = mid-p+1;
            r = mid+(len-p);
            break;
        }
    }
    cout<<"! "<<l<<" "<<r<<endl;
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