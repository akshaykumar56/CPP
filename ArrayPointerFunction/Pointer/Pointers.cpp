#include<iostream>
 using namespace std;

int main()
{
int a=9;
int *b=&a;
int **c=&b;
cout<<"the address of a is :"<<b<<endl;
cout<<"the address of a is :"<<&a<<endl;
cout<<"the value at address a is "<<*b<<endl;
cout<<"the address of b is :"<<c<<endl;
cout<<"the address of b is :"<<&b<<endl;
cout<<"the value at address c is "<<**c<<endl;
return 0;
}