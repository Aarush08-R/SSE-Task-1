#include<iostream>
using namespace std;

void print(int n){
    if(n<=0)
        return;
    cout<<n<<endl;
    return print(n-1);
}

int main(){
    int num;
    cout<<"Enter number from which you have to print: ";
    cin>>num;
    print(num);
    return 0;
}