#include<iostream>
#include<set>
using namespace std;

// Set stores uniquely and in a sorted manner
// It is also not a linear container
// A tree is used just like in priority queues

// push has time complexity O(logn) and top has O(1)

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(2);      // will not work
    st.insert(3);
    st.insert(4);

    auto it = st.find(3);  // it will return an iterator that points to 3
    cout<<*(it)<<endl;

    // Since 6 is not there in the set it points to the st.end() i.e., after the last element
    auto it = st.find(6);

    st.erase(4); // erases 4 and takes logarithmic time

    // count the number of times an element appears
    int cnt = st.count(1);
    cout<<cnt<<endl;

    auto it = st.find(3);
    st.erase(it);   
    // erase can take both address or value in case of sets

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);

    auto it = st.lower_bound(2);

    return 0;
}