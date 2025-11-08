#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6,4,2,1,9,8,3,5,12,10,11};
    int n = 11;
    int cnt[n+2] = {0};
    cout<<"Unsorted Array: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
        cnt[arr[i]]++;
    }
    cout<<endl;
    for(int i = 1;i <= 12;i++){
        cnt[i] += cnt[i-1];
    }
    int ans[n];
    for(int j = n-1;j >= 0;j--){
        int p = cnt[arr[j]];
        ans[--p] = arr[j];
    }
    cout<<"Sorted Array: ";
    for(int i = 0;i < n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}