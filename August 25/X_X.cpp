#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+9;
int a[N];
int t[N*4];
int lazy[N*4];
void push(int n, int b, int e){
    if(lazy[n] == -1){
        return;
    }
    t[n] = (e-b+1) * lazy[n];
    if(b!=e){
        int lc = 2*n;
        int rc = 2*n+1;
        lazy[lc] = lazy[n];
        lazy[rc] = lazy[n];
    }
    lazy[n] = -1;
}
void build(int n,int b,int e){
    lazy[n] = -1;
    if(b == e){
        t[n] = a[b];
        return;
    }
    int mid = (b+e)/2;
    int lc = 2*n,rc = 2*n+1;
    build(lc,b,mid);
    build(rc,mid+1,e);
    t[n] = t[lc]+t[rc];
}
void update(int n, int b, int e, int i, int j, int v){
    push(n,b,e);
    if(j < b || e < i)return;
    if(i <= b && e <= j){
        lazy[n] = v;
        push(n,b,e);
        return;
    }
    int mid = (b+e)/2;
    int lc = 2*n,rc = 2*n+1;
    update(lc,b,mid,i,j,v);
    update(rc,mid+1,e,i,j,v);
    t[n] = t[lc]+t[rc];
}
int query(int n,int b, int e, int i, int j){
    push(n,b,e);
    if(i > e || b > j) return 0;
    if(i <= b && e <= j)return t[n];
    int mid = (b+e)/2;
    int lc = 2*n,rc = 2*n+1;
    return query(lc,b,mid,i,j)+query(rc,mid+1,e,i,j);
}


int32_t main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++){
        a[i] = 0;
    }
    //cout<<endl;
    build(1,1,n);
    while(m--){
        int x;
        int l,r,v;
        cin>>l>>r>>v;
        update(1,1,n,l,r,v);
    }
    for(int i = 1;i <= n;i++){
        cout<<query(1,1,n,i,i)<<endl;
    }
    return 0;
}