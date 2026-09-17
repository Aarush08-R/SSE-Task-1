#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    // In this data structure priority is given to maximum element and it is at the top
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;
    // there are size and empty functions

    // IMPORTANT-Minimum Heap(To get minimum element at top i.e., opposite)
    priority_queue<int, vector<int>, greater<int>> ppq;
    ppq.push(5);
    ppq.push(2);
    ppq.push(8);
    ppq.emplace(10);
    cout<<ppq.top();
    return 0;
}