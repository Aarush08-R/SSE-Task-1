#include<iostream>
using namespace std;

int main(){
    int size=6;
    int arr[] = {5,15,22,1,-15,24};

    int smallest = INT64_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    cout<<"Smallest"<<smallest;

    return 0;
}