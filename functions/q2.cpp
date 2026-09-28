#include<iostream>
using namespace std;

int factorial(int n){
    int p = 1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int main(){
    int val;
    cout<<"Enter value to find factorial for: ";
    cin>>val;

    cout<<"Factorial is: "<<factorial(val);
    return 0;
}