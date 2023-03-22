// if fuction with same name is present in more than one base class
//so in order which functon should be run we have to done ambiguity resolution
#include<iostream>
 using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho?"<<endl;
    }
};
class derived: public base1,public base2
{
    int a;

public:
void greet()
{
base1::greet();
}
};
int main(){
base1 base1ob;
base1ob.greet();
base2 base2ob;
base2ob.greet();
derived d;
d.greet();
return 0;
}