#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int product(int arr[], int size){
    int p = 1;
    for(int i=0;i<size;i++){
        p *= arr[i];
    }
    return p;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;

    cout<<"Sum is: "<<sum(arr,size)<<endl;
    cout<<"Product is: "<<product(arr,size);
    return 0;
}