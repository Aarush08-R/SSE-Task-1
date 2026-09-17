#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number you want to reverse: ";
    cin>>n;
    int revN = 0;
    while (n>0){
        int lastdigit = n%10;
        revN = (revN * 10)+lastdigit;
        n /= 10;
    }

    cout<<"The reverse of number is: "<<revN<<endl;
    return 0;
}