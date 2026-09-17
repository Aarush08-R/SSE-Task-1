#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    // MAP is a python dictionary like container which stores value in the form of key and value pairs
    // Keys are unique and value can be duplicated
    mpp[1] = 2;
    mpp.insert({2,3});
    mpp.emplace(3,5);

    mpp2[{1,2}] = 4;

    cout<<mpp[1]<<endl;

    // to print key-value pairs
    for(auto val: mpp){
        cout<< val.first<< " "<<val.second<<endl;
    }

    // use find
    auto it = mpp.find(3); // {3,1} 's address
    // cout<<*(it).second;  why errors?  

    return 0;
}