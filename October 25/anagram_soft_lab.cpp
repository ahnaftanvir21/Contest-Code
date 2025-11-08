#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size() != s2.size()){
        cout<<"NOT Anagram!!";
        return;
    }
    map<char,int>mp1,mp2;
    for(int i = 0;i < s1.size();i++){
        mp1[s1[i]]++;
        mp2[s2[i]]++;
    }
    bool f = true;
    for(char i = 'a';i <= 'z';i++){
        if(mp1[i] != mp2[i]){
            f = false;
            break;
        }
    }
    if(f){
        cout<<"Anagram\n";
    }
    else{
        cout<<"Not Anagram\n";
    }
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