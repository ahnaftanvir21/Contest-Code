#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

const int N = 1e6 + 9;
int spf[N];
int Spf() {
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    for (int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);
    }
  }

  return 0;
}
void test(int tt){
    int n,k;
    cin>>n>>k;
    int cnt = 0;
    map<int,int>mp;
    int sq = 0;
    int p = n;
    while(n > 1){
        cnt++;
        mp[spf[n]]++;
        n /= spf[n];
    }
    
    int ans = 0;
    for(int mid = 62;mid >= 1;mid--){
        int c = 0;
        //cout<<mid<<endl;
        for(auto x:mp){
            int pr = x.second;
            int num = 2;
            int need = 1;
            int cn = mid;
            //cout<<pr<<endl;
            while(cn--){
                need = need*num;
            }
            if(pr > need){
                //cout<<pr<<" "<<need<<endl;
                if(pr%need == 0){
                    need = pr;
                }
                else{
                    int m = pr/need;
                    need = need*(m+1);
                }
            } 
            //cout<<need<<" "<<pr<<endl;
            c+=(need-pr);
            if(c > k){
                break;
            }
        }
        if(c <= k){
            //cout<<<<endl;
            ans = mid;
            break;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Spf();
    int t;
    t = 1;
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}