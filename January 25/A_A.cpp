#include <bits/stdc++.h>
using namespace std;
int main()
{
    char st[5];
    cin>>st;
    if(strlen(st) == 1){
        if(st[0] == 'N'){
            cout<<"S\n";
        }
        else if(st[0] == 'S'){
            cout<<"N\n";
        }
        if(st[0] == 'W'){
            cout<<"E\n";
        }
        else if(st[0] == 'E'){
            cout<<"W\n";
        }

    }
    else{
        if(st[0] == 'N' && st[1] == 'W'){
            cout<<"SE\n";
        }
        if(st[0] == 'S' && st[1] == 'E'){
            cout<<"NW\n";
        }
        if(st[0] == 'N' && st[1] == 'E'){
            cout<<"SW\n";
        }
        if(st[0] == 'S' && st[1] == 'W'){
            cout<<"NE\n";
        }
    }
    return 0;
}