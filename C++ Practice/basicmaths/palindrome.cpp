#include<iostream>
using namespace std;

int main(){
    int num, revNum;
    revNum = 0;
    cout<<"Enter number to check: "<<endl;
    cin>>num;
    int original = num;
    while (num > 0){
        int lastdigit = num % 10;
        revNum = (revNum * 10) + lastdigit;
        num /= 10;
    }

    cout<<revNum<<endl;

    if(original == revNum){
        cout<<"The number is a palindrome.";
    }
    return 0;
}