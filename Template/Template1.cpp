#include<iostream>
 using namespace std;
/* 
template <class T1,class T2>
class nameofclass{
    //body
}

*/
template<class C1=int,class C2=float,class C3=char>
class myclass{
    public:
    C1 a;
    C2 b;
    C3 c;
    myclass(C1 x,C2 y,C3 z){
        a=x;
        b=y;
        c=z;
    }
void display()
{
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
     cout<<"the value of c is "<<c<<endl;
}
};

int main(){
myclass<> obj(1,1.908,'d');
obj.display();
return 0;
}