#include<iostream>
 using namespace std;
long fact(int n)
{
    if(n==0)
        return 1;
    else
    return n*fact(n-1);
}
int main()
{
int num;
cout<<"enter value of num :";
cin>>num;
cout<<" the factorial of a number n is "<<fact(num)<<endl;
return 0;
}