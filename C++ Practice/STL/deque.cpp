#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    // To print elements in deque
    for(auto it=dq.begin();it != dq.end();it++){
        cout<<*(it)<<endl;
    }

    dq.pop_back();
    dq.pop_front();

    // All functions like end, begin, etc. are also in deque
    // just like vectors and list
    dq.back();
    dq.front();
    // To return empty deque
    dq.clear();
    return 0;
}