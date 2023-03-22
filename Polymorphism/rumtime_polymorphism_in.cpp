#include<iostream>
 using namespace std;
class baseclass
{
    public:
    int var_base=12;
     virtual void display()
  {
    cout<<"1 displaying base class variable var_base "<<var_base<<endl;
}
};


class derivedclass:public baseclass
{
public:
int var_derived=56;
void display()
{
    cout<<"2 displaying base class variable var_base :"<<var_base<<endl;
    cout<<"2 displaying derived class variable var_derived :"<<var_derived<<endl;
}
};
int main(){

baseclass *B; 
baseclass obj_base;
derivedclass obj_derived;
B=&obj_derived; 
B->display();
return 0;
}