#include<iostream>
 using namespace std;

int main()  // pointer is a derived datatype which is used to store the address of other datatypes
{
    int a=3;
    int *b=&a;   // &-----> (address of )operator  
    cout<<"the address of a is :"<<b<<endl;
    cout<<"the address of a is :"<<&a<<endl;
    cout<<"the value at address b is :"<<*b<<endl;            //  * -->dereference operator
return 0;
}