#include<iostream>
using namespace std;
int main()
{
// what is pointer? ----> data type which holds the address of other datatype
int a=3;
int* b=&a;            //  b is a variable that contains the value of a
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<b<<endl;
cout<<"the value of a is "<<*b<<endl;
// &----> address of operator
// pointer to pointer 
int**c=&b;
cout<<"the address of b is"<<&b<<endl;
cout<<"the address of b is"<<c<<endl;
cout<<"the value at address c is"<<*c<<endl;
cout<<"the value of b is"<<**c<<endl;
return 0;
}
