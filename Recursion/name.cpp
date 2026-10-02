#include<iostream>
using namespace std;

// OPTIMAL METHOD
void print(string name, int i, int n){
    // base case
    if(i > n)
        return;
    cout<<name<<endl;
    return print(name, i+1, n);
}

// THIS IS BRUTEFORCE BY ME:

// int count = 0;

// void printname(string n, int num){
//     if(count == num){
//         return;
//     }
//     count++;
//     cout<<n<<endl;
//     return printname(n, num);
// }

int main(){
    // print name 5 times
    string name;
    int n;
    cout<<"Enter how many times: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter your name: ";
    // Takes input the full string with spaces instead like cin
    // if you use cin before getline, you have to do cin.ignore() to remove the newline after cin 
    // otherwise getline will not take input
    getline(cin,name);
    // printname(name, n);

    print(name, 1, n);
    return 0;
}