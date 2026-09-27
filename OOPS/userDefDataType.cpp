#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Genius";
    s1.gpa = 10.0;
    s1.rno = 76;

    Student s;
    s.name = "Hippo";
    s.gpa = 10.0;
    s.rno = 88;

    return 0;
}