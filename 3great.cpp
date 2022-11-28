#include <iostream>
#include<math.h>
using namespace std;
void thirdlargest(int arr[],int arr_size ){
        int j, k ,temp;
        for(j= 0; j< arr_size; j++){
            for(k=j+1; k< arr_size; k++){
                if(arr[j]>arr[k]){
                    temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
    }
int main(){
    int size, a[50],b;
    cin>>size;
    for(int z=0; z<size; z++){
        cin>>a[z];
    }
    thirdlargest(a,size);
    cout<<a[size-3]<<endl;

    return 0;
}
