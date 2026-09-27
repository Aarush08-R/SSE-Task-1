#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    cout<<"Enter target to search: ";
    int target;
    cin>>target;

    int num = 0;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"Found "<<target<<" at index "<<i;
            break;
        }
        int num = 1;
    }

    if(num == 0){
        cout<<"Not Found";
    }

    return 0;
}