#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


// In multiset you can store duplicate values in ordered manner

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.emplace(2);

    // erase works similarly
    ms.erase(1);
    // If there are multiple ones in the set then all ones are erased like
    ms.erase(2); // Here all twos are erased 

    // To erase a single 2 we use this and write address(it is address for first occurrence of one)
    ms.erase(ms.find(2)); // ms.find() is iterator which stores address so we can pass it in erase

    // rest all functions same as set
    unordered_set<int> us;

    // All functions of unordered set are same as sets
    // Only difference is that it is unordered that is in any not like sets which are orderd
    // although elements are unique unlike multiset
    // only lower_bound and upper_bound does not work
    
    return 0;
}