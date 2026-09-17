#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();     // {0,5,2,4}

    //  Rest functions are same as vectors.
    // Like the clear function returns and empty list
    // Size function gives size of list
    // ls.begin(), ls.end(), ls.rend()
    // insert also works same way giving index and then inserting that value

    for(auto it=ls.begin(); it!=ls.end(); it++){
        cout<<*(it)<<endl;
    }

    ls.clear();
    // clears all list and gives empty list

    cout<<ls.size()<<endl;
    // Gives size of list

    cout<<ls.empty();

    return 0;
}