#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int  N = 1e5+9;
int level[N] = {0};
void bfs(int n , int m){
    queue<int>q;
    q.push(n);
    level[n] = 1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        if(!level[p*2] && p*2 <= m*4){
            level[p*2] = level[p]+1;
            q.push(p*2);
        }
        if(!level[p-1] && p > 1){
            level[p-1] = level[p]+1;
            q.push(p-1);
        }
        if(level[m] != 0){
            break;
        }
    }
    cout<<level[m]-1<<endl;
}
void test(int tt){
    int n,m;
    cin>>n>>m;
    bfs(n,m);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}