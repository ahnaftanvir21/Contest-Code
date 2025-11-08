#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    map<pair<int,int>,int>mp;
    for(int i = 0;i < n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        mp[{x,y}] = 1;
    }
    //cout<<mp[{0,100}]<<" "<<mp[{100,100}]<<endl;
    if(n == 0){
        cout<<"4\n";
        return;
    }
    else if(n == 1){
        cout<<"3\n";
        return;
    }
    bool a,b,c;
    a = b = c = false;
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(i == j)continue;
            //cout<<i<<" "<<j<<endl;
            int x1,x2,y1,y2;
            x1 = v[i].first;
            x2 = v[j].first;
            y1 = v[i].second;
            y2 = v[j].second;
            //cin>>x1>>y1>>x2>>y2;
            int x31,x41,y31,y41,y32,y42,x32,x42;
            bool m = false;
            if((y2-y1 < 0 && x2-x1 < 0) || (y2-y1 >= 0 && x2-x1 >= 0)){
                m = true;
            }    
            else if(y2-y1 < 0 || x2-x1 < 0){
                m = false;
            }
            //double m = (y2 - y1)/(x2 - x1);
            if(!m){
            int disx = abs(y2-y1);
            int disy = abs(x2-x1);
            ///for x3,y3
                x31 = x1+disx;
                y31 = y1+disy;

                x32 = x1-disx;
                y32 = y1-disy;
            
            //for x4,x5;
                x41 = x2+disx;
                y41 = y2+disy;

                x42 = x2-disx;
                y42 = y2-disy;
            }
            else{
                int disx = abs(y2-y1);
                int disy = abs(x2-x1);
            ///for x3,y3
                x31 = x1-disx;
                y31 = y1+disy;

                x32 = x1+disx;
                y32 = y1-disy;
            
            //for x4,x5;
                x41 = x2-disx;
                y41 = y2+disy;

                x42 = x2+disx;
                y42 = y2-disy;
            }
            // cout<<x31<<" "<<y31<<endl;
            // cout<<x41<<" "<<y41<<endl;
            // cout<<x32<<" "<<y32<<endl;
            // cout<<x42<<" "<<y42<<endl;
            //cout<<endl;
            if(mp[{x31,y31}] == 1 || mp[{x32,y32}] == 1 || mp[{x41,y41}] == 1 || mp[{x42,y42}] == 1){
                b = true;
            }
            if((mp[{x31,y31}] == 1 && mp[{x41,y41}] == 1) || (mp[{x32,y32}] == 1 && mp[{x42,y42}] == 1)){
                a = true;
            }
            //for diagonal
            // int dx3,dx4,dy3,dy4;
            // dx3 = ((x1+x2)/2.0 - (y1-y2)/2.0);
            // dy3 = ((y1+y2)/2.0 + (x1-x2)/2.0);

            // dx4 = ((x1+x2)/2.0 + (y1-y2)/2.0);
            // dy4 = ((y1+y2)/2.0 - (x1-x2)/2.0);
            // if(mp[{dx3,dy3}] == 1 || mp[{dx4,dy4}] == 1){
            //     b = true;
            // }
            // if(mp[{dx3,dy3}] == 1 && mp[{dx4,dy4}] == 1){
            //     a = true;
            // }
            if(a == true){
                break;
            }
        }
        if(a == true){ break;}
    }
    if(a){
        cout<<"0\n";
    }
    else if(b){
        cout<<"1\n";
    }
    else{
        cout<<"2\n";
    }
    // int x1,x2,y1,y2;
    // cin>>x1>>y1>>x2>>y2;
    // int x31,x41,y31,y41,y32,y42,x32,x42;
    // bool m = false;
    // if((y2-y1 < 0 && x2-x1 < 0) || (y2-y1 >= 0 && x2-x1 >= 0)){
    //     m = true;
    // }    
    // else if(y2-y1 < 0 || x2-x1 < 0){
    //     m = false;
    // }
    // //double m = (y2 - y1)/(x2 - x1);
    // if(!m){
    // int disx = abs(y2-y1);
    // int disy = abs(x2-x1);
    // ///for x3,y3
    //     x31 = x1+disx;
    //     y31 = y1+disy;

    //     x32 = x1-disx;
    //     y32 = y1-disy;
    
    // //for x4,x5;
    //     x41 = x2+disx;
    //     y41 = y2+disy;

    //     x42 = x2-disx;
    //     y42 = y2-disy;
    // }
    // else{
    //     int disx = abs(y2-y1);
    //     int disy = abs(x2-x1);
    // ///for x3,y3
    //     x31 = x1-disx;
    //     y31 = y1+disy;

    //     x32 = x1+disx;
    //     y32 = y1-disy;
    
    // //for x4,x5;
    //     x41 = x2-disx;
    //     y41 = y2+disy;

    //     x42 = x2+disx;
    //     y42 = y2-disy;
    // }
    // cout<<x31<<" "<<y31<<endl;
    // cout<<x41<<" "<<y41<<endl;
    // cout<<x32<<" "<<y32<<endl;
    // cout<<x42<<" "<<y42<<endl;
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