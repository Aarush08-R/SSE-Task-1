#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

enum Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tail_len;

void setup(){
    gameOver = false;
    dir = STOP;
    headX = width/2;
    headY = height/2;
    fruitX = rand()%width;
    fruitY = rand()%height;
    score = 0;
}

void draw(){
    system("cls");
    // Upper border
    cout<<"\t\t";
    for(int i=0;i<width-8;i++){
        cout<<"||";
    }
}

int main(){
    char start;

    cout<<"\t-----------------------------"<<endl;
    cout<<"\t\tSnake Game"<<endl;
    cout<<"\t-----------------------------"<<endl;

    cout<<"Press 's' to start: "<<endl;
    cin>>start;

    if(start == 's'){
        setup();
        if(!gameOver){
            draw();
            // makes the loop slow for efficient performance
            Sleep(30);
            // to draw new screen at the same time
            system("cls");
        }
    }
    return 0;
}