#include<iostream>
 using namespace std;
class baseclass
{
    public:
    int B=1;
    virtual void display()
    {
cout<<"1 displaying base class variable B "<<B<<endl;
    }
};
class derivedclass :public baseclass
{
    public:
    int D=5;
     void display()
    {
cout<<"2 displaying base class variable B "<<B<<endl;
cout<<"2 displaying derived class variable D "<<D<<endl;
    }
};
int main()
{
baseclass obj1;
derivedclass obj2;
baseclass *basep;

basep =&obj2;
basep->display();
return 0;
}