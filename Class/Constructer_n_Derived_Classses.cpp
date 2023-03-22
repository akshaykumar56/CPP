#include<iostream>
 using namespace std;
class base1
{
int num1;
public:
base1(int a) // constructer is called
{
    num1=a;
    cout<<"base1 constructer is called here :"<<endl;
}
void printnumber1(void){
    cout<<"your num1 is :"<<num1<<endl;
}
};

class base2
{
int num2;
public:
base2(int a)
{
    num2=a;
    cout<<"base 2 consrtucter is called:"<<endl;
}
void printnumber2(void)
{
    cout<<"your num2 is :"<<num2<<endl;
}
};
class derived :public base2, virtual public base1
{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived class costructer called"<<endl;
    }
void printdata(void)
{
    cout<<"the value of derived1 is "<<derived1<<endl;
cout<<"the value of derived2 is "<<derived2<<endl;
}
};
    
int main(){
    derived harry(1,2,3,4);
    harry.printnumber1();
    harry.printnumber2();
    harry.printdata();
return 0;
}