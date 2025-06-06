#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    // Person(){
    //     cout<<"Person Constructor"<<endl;
    // }
};
class Student: public Person{
public:
    int rollNo;

    // void getInfo(){
    //     cout<<"name : "<<name<<endl;
    //     cout<<"age : "<<age<<endl;
    //     cout<<"roll no : "<<rollNo<<endl;
    // }
    // Student(){
    //     cout<<"Student Constructor"<<endl;
    // }
};
class GradStudent : public Student{
public:
    string researchArea;
};
int main(){
    GradStudent s1;
    s1.name="Tony Stark";
    s1.researchArea="AI";

    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;

    return 0;
}