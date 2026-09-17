#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);
    // Stack is LIFO type of data structure
    st.pop();
    // Tells who is at top
    cout<<st.top()<<endl;

    cout<<st.empty();
    cout<<st.size();

    stack<int> st1, st2;
    st1.swap(st2);

    return 0;
}