#include<iostream>
 using namespace std;
class complex{
    int a,b;
   friend complex sumcomplex(complex o1,complex o2);
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;; 
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
complex c1,c2,sum;
c1.setnumber(1,4);
c2.setnumber(5,6);
c1.printnumber() ;
c2.printnumber() ;
sum=sumcomplex(c1,c2);
sum.printnumber();
return 0;
}
// properties of friend function
//1.not in the scope of class
//2.since it is not in the scope of the class ,it cannot be  called from the object of that class. c1.sumComplex() ==invalid
//3.can be invoked without the help of any object
//4.usually contain the object as argument
//5.can be declared in public as well as private section of the classit cannot access the members directly by their names and need object_name.member_name to access any member