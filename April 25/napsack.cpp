#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int weight[] = {3,1,4,2,9,4,3};
    int profit[] = {12,5,16,7,9,11,6};
    int wt = 15;
    double rati[n+1];
    for(int i = 0;i < n;i++){
        rati[i] = (double)profit[i]/(double)weight[i];
    }
    int ans = 0;
    while(wt > 0){
        double mn = 0;
        int m = 0;
        for(int i = 0;i < n;i++){
            if(rati[i] > mn){
                mn = rati[i];
                m = i;
            }
        }
        // cout<<m+1<<endl;
        rati[m] = 0;
        if(weight[m] <= wt){
            wt -= weight[m];
            ans+=profit[m];
            cout<<"Weight: "<<weight[m]<<" Profit: "<<profit[m]<<endl;
        }
        else{
            int s = ((double)wt/ (double)weight[m])* (double)profit[m];
            ans +=  s;
            cout<<"Weight: "<<wt<<" Profit: "<<s<<endl;
            wt = 0;
            break;
        }
    }
    cout<<"Total Profit: "<<ans<<endl;
    return 0;
}