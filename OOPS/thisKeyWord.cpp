#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    //constructor
    Cricketer(string name, int runs, float avg){
        this->name = name;     // this keyword considers the name to be the atttribute name.
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout<<name<<endl<<runs<<endl<<avg<<endl;
    }

    int calculate(){
        return runs/avg;
    }
};

int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",10000,47.8);

    c1.print();
    c2.print();
    cout<<c1.calculate();

    return 0;
}