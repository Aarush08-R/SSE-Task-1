#include<iostream>
using namespace std;

int factorial(int n){
    int p = 1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact = factorial(n-r);

    int coeff = fact_n/(fact_r * fact);
    return coeff;
}

int main(){
    int n = 8, r = 2;
    cout<<nCr(n,r);

    return 0;
}