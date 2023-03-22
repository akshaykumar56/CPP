#include<iostream>
 using namespace std;

int main(){
// basic value
int a=4;
int *ptr=&a;
cout<<"the value of a is "<<*ptr<<endl;
// new keyword
int *p = new int(40);
delete[] p;
cout<<"the value of a is "<<*p<<endl;
// delete operator
return 0;
}