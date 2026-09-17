#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n=36;
    vector<int> ls;     // For sorting
    // To reduce the time complexity we need to loop to root n instead of n
    for(int i = 1; i<= sqrt(n); i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    // To sort the vector in ascending order
    sort(ls.begin(),ls.end());
    for(auto it : ls){
        cout<<it<<endl;
    }


    // -------------OR---------------
// This code has complexity O(n) so we write a better code using a simple mathematical observation


    // cout<<"All factors of "<<num<<" are: "<<endl;
    // for(int i=1;i<=num;i++){
    //     if(num%i == 0){
    //         cout<<i<<endl;
    //     }
    // }
    return 0;
}