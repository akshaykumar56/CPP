#include<iostream>
using namespace std;
class animal
{
    private:
    int a,b,c;
    public:
    int d,e;
    void hello(int a1,int b1,int c1);
    void lello()
    {
       cout<<"the value of a is "<<a<<endl;
       cout<<"the value of b is "<<b<<endl;
       cout<<"the value of c is "<<c<<endl;
       cout<<"the value of d is "<<d<<endl;
       cout<<"the value of e is "<<e<<endl;
    }
};
void animal::hello(int a1 ,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main(){
animal tiger;
tiger.d=19;
tiger.e=13;
tiger.hello(1,7,4);
tiger.lello();
return 0;
}