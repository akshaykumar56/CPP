#include<iostream>
 using namespace std;
 
 // the below method do nothing
// void swap(int a,int b)
// {
// int temp=a;
// a=b;
// b=temp;
// }

// this method will swap two number using pointer reference(call by reference)
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

// this method will swap a and b by reference variable(call by reference)
// void swap(int &a,int &b)
// {
// int temp=a;
// a=b;
// b=temp;
// }
int main()
{
    int a=4,b=5;
    cout<<"the value of a and b is "<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a is "<<a<<" & the value of b is "<<b<<endl;

return 0;
}