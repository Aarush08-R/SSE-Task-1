#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.emplace_back(2);

    vector<pair <int,int>> vec1;
    vec1.push_back({1,2});
    // If we write two numbers it automatically takes it as pair.
    vec1.emplace_back(1,2);

    // Creates a vector of size of 5 and having instances of 100
    vector<int> v(5,100);

    vector<int> v1(5,20);
    // copy vector from v1 to v2
    vector<int> v2(v1);

    // iterator is used to point at memory
    // vec.begin() points at the memory address using iterator

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    // print from vector
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << endl;
    }

    for (auto it = vec.begin(); it != vec.end(); it++){
        cout<< *(it)<<endl;
    }

    for(auto it: vec){
        cout << it << endl;
    }

    cout<<vec[0]<<endl;
    cout<<vec.at(0)<<endl;   
    
    // Deletion in vector
    vector<int> vn;
    vn.push_back(10);
    vn.push_back(20);
    vn.push_back(30);
    vn.push_back(40);
    vn.push_back(50);
    // cout<<vn.size();
    for(int val: vn){
        cout<<val<<endl;
    }
    vn.erase(vn.begin()+1);
    // vn.erase(vn.begin()+1,vn.begin()+4) - Last one is not included

    // Insertion in vector
    vn.insert(vn.begin()+1,300);
    for(auto it: vn){
        cout<<it<<endl;
    }

    // Insertion of vector in a vector
    vector<int> copy(2,50);
    vn.insert(vn.begin(),copy.begin(),copy.end());

    // Other functions in vector
    // Size of vector
    cout<<vn.size()<<endl;

    // Remove last element 
    vn.pop_back();

    // swapping two vectors
    vector<int> vx(2,50);
    vector<int> vy(2,40);
    vx.swap(vy);

    // Clears the full vector and gives an empty vector
    vn.clear();

    // Checks whether the vector is empty or not
    // If empty then returns TRUE {}
    cout<< vn.empty();

    return 0;
}