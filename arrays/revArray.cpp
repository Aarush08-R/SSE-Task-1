#include<iostream>
using namespace std;

void revArray(int arr[], int size){
    int start = 0, end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);   // swap function to swap
        start++;
        end--;
    }

}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    revArray(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;// By pass by referance original array has changed after calling the func
    }

    return 0;
}