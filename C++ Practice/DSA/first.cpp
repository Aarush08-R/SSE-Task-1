#include<iostream>
using namespace std;
// Learning c++



// pass by value- it creates a copy of variable
void doSomething(int num){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;

}

int main(){
    int num = 10;
    doSomething(num);
    // pass by value 
    
    cout << num;
    return 0;
}