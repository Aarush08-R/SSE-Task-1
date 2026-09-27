#include<iostream>
using namespace std;

int main(){
    int size = 6;
    int arr[6] = {5,15,22,1,-15,24};

    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Minimum is: "<<min<<endl;
    cout<<"Maximum is: "<<max;

    return 0;
}