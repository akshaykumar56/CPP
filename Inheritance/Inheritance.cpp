// overview of inheritence in c++
//1.reusability is a very important feature of oops
//2.in c++ ce can reuse a class and additional feature to it

//derived class
/*class {{derived-class-name}} :{{visibility-mode}} {{base-class-name}}
{
    class membre/methods/etc
} */

#include<iostream>
 using namespace std;
// base class
class employee{
    public:
    int id;
    float salary;
    employee(int A){
        id=A; 
        salary=34.0;
    }
 employee(){}
};
class programmer: private employee{
    public:
    int languagecode=9;
    programmer(int A)   //constructer
    {
        id=A;
    }
    void printid()
    {
        cout<<"the id of the programmer is "<<id<<endl;
    }
};
int main(){
employee rohan(1),sohan(2);
cout<<rohan.salary<<endl;
cout<<sohan.salary<<endl;
cout<<rohan.id<<endl;
cout<<sohan.id<<endl;
programmer skillf(4);

cout<<skillf.languagecode;
skillf.printid();
return 0;
}