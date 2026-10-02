#include<iostream>
using namespace std;

int main(){

    // OPTIMAL SOLUTION(euclidean algorithm)
    int a, b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a==0){
        cout<<"GCD is: "<<b;
    } else {
        cout<<"GCD is: "<<a;
    }
    return 0;
}