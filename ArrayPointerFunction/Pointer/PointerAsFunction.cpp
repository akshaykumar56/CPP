#include<iostream>
 using namespace std;
// void swap(int *a,int*b)
// {
//     int t;
//     t=*a;
//     *a=*b;
//     *b=t;
// }
void swap(int &a,int &b)
{
  int t=a;
  a=b;
  b=t;
}
int main()
{
int num1;
int num2;
cout<<"enter value of num1:";
cin>>num1;
cout<<"enter value of num2:";
cin>>num2;
cout<<"the value of num1 is"<<num1<<endl;
cout<<"the value of num2 is"<<num2<<endl;
swap(num1,num2);
cout<<"the value after swapping:"<<endl;
cout<<"the value of num1 is"<<num1<<endl;
cout<<"the value of num2 is"<<num2<<endl;
return 0;
}