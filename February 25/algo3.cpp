#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0 ;i < n;i++){
        cin>>ara[i];
    }
    int c,in;
    cin>>c;

    for(int i = 0;i < n;i++){
        if(ara[i] == c){
            in = i+1;
            break;
        }
    }
    if(in!= 0){
        cout<<"index Number: "<<in<<endl;
    }
    else{
        cout<<"Not Found!\n";
    }
}