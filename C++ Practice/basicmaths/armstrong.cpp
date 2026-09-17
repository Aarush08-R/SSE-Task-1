#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to check whether it is armstrong or not: ";
    cin>>num;
    int original = num;
    int sum = 0;
    while (num>0){
        int lastdigit = num%10;
        sum += pow(lastdigit,3);
        num /= 10;
    }

    if(sum == original){
        cout<<"The given number is a armstrong number.";
    }
    return 0;
}