#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout<<vec.size()<<endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;

    vec.pop_back();

    for(char val : vec){
        cout<<val<<endl;      // for each loop
    }
    return 0;
}