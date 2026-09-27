#include<iostream>
using namespace std;

int main(){
    int n=4;

    //TOP
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<(6-2*i);j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;

    }

    return 0;
}