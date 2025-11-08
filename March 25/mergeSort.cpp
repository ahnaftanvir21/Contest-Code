#include <iostream>
using namespace std;
int arr[] = {6,4,2,1,9,8,3,5,12,10,11};
void merge(int low, int mid, int high){
    int temp[(high - low)+1];
    int i = low,j = mid+1;
    int k = 0;
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high){
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(int i = low;i <= high;i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(int low,int high){
    int mid = (low+high)/2;
    if(low >= high){
        return;
    }
    mergeSort(low,mid);
    mergeSort(mid+1,high);
    merge(low,mid,high);
}
int main()
{
    int n = 11;
    cout<<"Unsorted Array: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(0,n-1);
    cout<<"Sorted Array: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}