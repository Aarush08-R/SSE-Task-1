#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int val;
    cout<<"Enter value for additon: ";
    cin>>val;

    cout<<"Sum upto n is: "<<sum(val);
    return 0;
}