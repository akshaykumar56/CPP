#include<iostream>
 using namespace std;
 class complex
 {
     int a,b;
     public:
     complex(int,int);
     void printnumber()
     {
     cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
     }
 };
 complex ::complex(int x,int y)  // this is a parameterised constructer
 {
     a=x;
     b=y;
 }
 
int main(){
complex a(2,3);
a.printnumber();
complex b(1,9);
b.printnumber();
complex c(4,7);
c.printnumber();
return 0;
}