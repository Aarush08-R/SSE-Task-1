#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;    // attributes
    float gpa;

    // default constructor
    Student(){
        
    }
    // constructors
    Student(string s, int r){      
        name = s;
        rno = r; 
    }
    Student(string s, int r, float g){    //parameterized constructor
        name = s;
        rno = r;
        gpa = g;
    }
};

int main(){
    Student s1("Genius",76,10.0);
    return 0;
}