#include<iostream>
#include<string>
using namespace std;

class Shape{//Abstract class
    virtual void draw()=0;//Pure virtual function
};

class Circle:public Shape{
    public:
        void draw(){
            cout<<"Draw a Circle"<<endl;
        }
}

int main(){
    Circle c1;
    c1.draw();
    return 0;
}