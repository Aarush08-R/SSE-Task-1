#include<iostream>
#include<math.h>
using namespace std;

// int count(int n){
//     // USING DIGIT EXTRACTION
//     int count = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         count += 1;
//         n /= 10;
//     }
//     return count;
// }

// -----------OR------------

int count(int n){
    int count = log10(n) + 1;
    return count;
}

// it's time complexity is O(logn) because of how much the input n increase it's number ofo digits is 
// logn approximately.

int main(){
    cout<<"The number of digits in 7789: "<< count(7789)<< endl;
    return 0;
}