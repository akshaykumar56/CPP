#include<iostream>
using namespace std;
class complex; //forward declaration
class calculator{
    public:
    int add(int a,int b){
        return(a+b);
    }
    int sumreal(complex,complex);
    int sumcos(complex,complex);
};
class complex{
    int a,b;
    // friend int calculator :: sumreal(complex o1,complex o2);
    // friend int calculator :: sumcos(complex o1,complex o2);
    friend class calculator;
    public:  
    void setnumber(int x,int y){
       a=x;
       b=y;
    }

void printnumber(){
    cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
}
};
int calculator :: sumreal(complex o1, complex o2){
return(o1.a+o2.a);
}
int calculator :: sumcos(complex o1 , complex o2){
return(o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res=calc.sumreal(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
int cos=calc.sumcos(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<cos<<endl;
return 0;
}