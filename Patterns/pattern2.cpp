#include<iostream>
using namespace std;
int main(){
    int n=4;
     for(int i=1;i<=n;i++){ //outer loop to print number of rows
        char ch ='A';
        for (int j=0;j<n;j++){
            cout<<ch;
            ch += 1; // charcater gets converted to 65 then +1 and then gets stored in ch as char B
        }
        cout<<endl;
     }
}