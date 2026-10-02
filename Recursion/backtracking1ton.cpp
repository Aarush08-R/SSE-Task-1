#include<iostream>
using namespace std;

void oneton(int i, int n){
    if(i<1)
        return;
    oneton(i-1,n);
    cout<<i<<endl;
}

int main(){
    int num;
    cout<<"Upto which number: ";
    cin>>num;
    oneton(num, num);
    return 0;
}