#include<iostream>
 using namespace std;
class A
{
    public:
    int x,y;
    void getdata()
    {
        cout<<"enter value of x :";
        cin>>x;
        cout<<"enter value of y :";
        cin>>y;
    }
};
class B :public A{
    public:
    void product()
    {
        cout<<"the product of x and y is"<<x*y<<endl;
    }
};
class C :public A{
    public:
    void sum()
    {
        cout<<"the sum of x and y is"<<x + y<<endl;
    }
};
class D :public A{
    public:
    void divide()
    {
        cout<<"the divide of x and y is"<<x/y<<endl;
    }
};
int main()
{
B obj1;
C obj2;
D obj3;
obj1.getdata();
obj1.product();
obj1.getdata();
obj2.sum();
obj1.getdata();
obj3.divide();
return 0;
}