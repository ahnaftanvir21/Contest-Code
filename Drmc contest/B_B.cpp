#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll long long
#define int long long
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const int MX = 2e5+123;
const ll infLL = 9000000000000000000;
const int MOD = 1e9+7;
bool sum(string s1,int m){
    int l = s1.size();
    int carry = 0;
    while(l--){
        if((s1[l]-'0') + m%10 + carry >= 10){
            if(l == 0){
                return false;
            }
            else{
                s1[l] = '0';
                carry = carry%10;
            }
        }
        else{
            s1[l] = ((s1[l] - '0') + carry+m%10) + '0';
        }
        m = m/10;
    }
    cout<<s1<<endl;
    return true;
}
bool neg(string st,int m){
    int l = st.size();
    int carry = 0;
    while(l--){
        if((st[l]-'0')  < m%10 + carry){
                int p = st[l]-'0';
                p = 10+p;
                st[l] = (p - (m%10+carry))+'0';
                carry+=1;
        }
        else{
            st[l] = ((st[l]-'0') - (m%10+carry)) + '0';
            carry = 0;
        }
        m = m/10;
    }
    if(st[0] == '0'){
        return false;
    }
    cout<<st<<endl;
    return true;
}
 
void testCases (int tt)
{
    string s1;
    int m;
    cin>>s1;
    cin>>m;
    int a = 0;
    // neg("55",5);
    // sum(s1,m);
    for(int i = 0;i < s1.size();i++){
        a = a*10+(s1[i]-'0');
        a = a % m;
    }
    if(a == 0){
        cout<<s1<<endl;
    }
    else if(neg(s1,a)){
        //cout<<"hello\n";
    }
    else{
        sum(s1,m-a);
    }

}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}