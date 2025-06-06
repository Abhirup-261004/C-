#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
   double salary;
public:
//Non-parameterized
   Teacher(){
      cout<<"Hi! I am Constructor\n";
   }
   //Parameterized
   Teacher(string name,string dept,string subject,double salary){
      this->name = name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
   }

   //Properties/Attributes
   string name;
   string dept;
   string subject;  

   //Methods
   void changeDept(string newDept){
   dept=newDept;
   }
   //Setter
   void setSalary(double s){
      salary=s;
   }
   //Getter
   double getSalary(){
      return salary;
   }
};

int main(){
   Teacher t1;//Constructor Call
   t1.name="Abhirup Nandi";
   t1.dept="CSE";
   t1.subject="OOPs";
   cout<<t1.name<<endl;
   t1.setSalary(25000);
   cout<<t1.getSalary()<<endl;
   return 0;
}