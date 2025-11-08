#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ara[7] = {7,3,0,1,5,6,10};
    int n,in = 0;
    cin>>n;
    for(int i = 0;i < 7;i++){
        if(ara[i] == n){
            in = i+1;
            break;
        }
    }
    if(in!= 0){
        cout<<"Index Number: "<<in<<endl;
    }
    else{
        cout<<"Not Found!\n";
    }
    return 0;
}