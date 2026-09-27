#include<iostream>
using namespace std;

void swapMinMax(int arr[],int size){
    int minIndex = 0;
    int maxIndex = 0;

    for(int i=0;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
    }

    swap(arr[minIndex],arr[maxIndex]);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    swapMinMax(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}