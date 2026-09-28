#include<iostream>
using namespace std;

int sum(int n){
    int l = (n%10);
    int ft = (n/10);

    int m = (ft%10);
    int f = (ft/10);

    int sum = l + m +f;
    return sum;

}

int main(){
    cout<<sum(145);
    return 0;
}