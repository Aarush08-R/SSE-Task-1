#include<iostream>
using namespace std;

int main(){

    pair<int , int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> p1 = {1, {3,4}};
    cout<<p1.second.first;

    // array in which we store pairs
    pair<int, int> arr[] = {{1,2}, {3,4}};

    return 0;
}