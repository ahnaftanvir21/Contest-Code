#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    int keys[] = {17,37,42};
    int n = 24;
    for(int j = 0;j < 3;j++){
        int low = 0;
        int high = 24;
        int mid;
        int key = keys[j];
        bool f = false;
        while(low <= high){
            mid = (low+high)/2;
            if(arr[mid] == key){
                f = true;
                break;
            }
            else if(arr[mid] > key){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(!f){
            cout<<"Not Found!\n";
        }
        else{
            cout<<"key is Found at "<<mid<<" index.\n";
            if(key == 17){
                cout<<"Elements Above and Equal to 17 are: \n";
                for(int i = mid;i <= n;i++){
                    cout<<arr[i]<<" ";
                }
            }
            if(key == 37){
                cout<<"Elements lower and Equal to 37 are: \n";
                for(int i = 0;i <= mid;i++){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}