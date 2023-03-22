#include<iostream>
 using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
int num1;
int num2;

cout<<"enter number 1:";
cin>>num1;
cout<<"enter number 2:";
cin>>num2;
sum(num1,num2);
cout<<"sum="<<sum(num1,num2);
return 0;
}