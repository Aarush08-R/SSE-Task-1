#include<iostream>
using namespace std;

// Only for increasing sequence
int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    
    // instead of (start+end)/2 we write this because it can be possible that
    // start and end sum's go out of range of integer then code will show error.
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        // go to right
        if(arr[mid] < key){
            start = mid + 1;
        } else {  // go to left
            end = mid - 1;
        }

        int mid = start + (end-start)/2;
    }

    return -1;
}

int main(){
    // In linear search time complexity is O(n) for worst case.
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == key){
    //         return i;
    //     }
    // }
    // return -1;

    // BINARY SEARCH
    // It takes monotonically increasing or decreasing array.
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index1 = binarySearch(even, 6, 18);
    cout<<"Index of 12 is: "<<index1<<endl;

    int index2 = binarySearch(odd, 5, 3);
    cout<<"Index of 3 is: "<<index2;

    return 0;
}