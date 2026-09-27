#include<iostream>
using namespace std;

int main(){
    int marks[5]={99,100,54,36,88};

    int size = sizeof(marks)/sizeof(int);

    // loops to access array
    for(int i=0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    
    return 0;
}