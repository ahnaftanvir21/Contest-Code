#include <bits/stdc++.h>
using namespace std;
vector<int>G[500005];
class DisjointSet{
    vector<int>rank,parent,size;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1);
            for(int i = 1;i <= n;i++){
                parent[i] = i;
                size[i] = 1;
            }
        }
        int findUPar(int node){
            if(node == parent[node]){
                return node;
            }
            return parent[node] = findUPar(parent[node]);
        }
        void unionByRank(int u,int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v)return;
            if(rank[ulp_u] < rank[ulp_v]){
                parent[ulp_u] = ulp_v;
            }
            else if(rank[ulp_v] < rank[ulp_u]){
                parent[ulp_v] = ulp_u;
            }
            else{
                parent[ulp_v] = ulp_u;
                rank[ulp_u]++;
            }
        }
        void unionBySize(int u, int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v)return;
            if(size[ulp_u] < size[ulp_v]){
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
            else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
        int findsize(int a){
            return size[findUPar(a)];
        }
};

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < m;i++){
        int s;
        cin>>s;
        for(int j = 0;j < s;j++){
            int a;
            cin>>a;
            G[i].push_back(a);
        }
    }
    DisjointSet dsu(n);
    for(int i = 0;i < m;i++){
        if(G[i].size() > 1){
            for(int j = 1;j < G[i].size();j++){
                dsu.unionBySize(G[i][j],G[i][j-1]);
            }
        }
    }
    for(int i = 1;i <= n;i++){
        cout<<dsu.findsize(i);
        if(i != n)cout<<" ";
        else cout<<endl;
    }
    return 0;
}