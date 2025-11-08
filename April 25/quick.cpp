#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j) {
        while (i <= high && arr[i] <= pivot){
            i++;
        }
        while (j >= low && arr[j] > pivot){
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[],int low, int high){
    if(low < high){
        int pi = partition(arr,low,high);
        quicksort(arr, low, pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int arr[] = {7,6,10,5,9,2,1,15,7};
    int n = 9;
    cout<<"Unsorted array: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"Sorted Array: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}