#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n)
        return;
    cout<<i<<endl;
    return print(i+1,n);
}

int main(){
    int n;
    cout<<"Enter upto how many numbers you want to print: ";
    cin>>n;
    print(1,n);
    return 0;
}