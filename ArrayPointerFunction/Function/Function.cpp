#include<iostream>
 using namespace std;

//function prototype
//type functio_name(arguments);
// int sum(int a,int b);
    
int main()
{
    int m,n;
    cout<<"enter your number 1 :"<<endl;
    cin>>m;
    cout<<"enter your number 2 :"<<endl;
    cin>>n;
    cout<<"the sum is "<<sum(m,n);
return 0;
}
int sum(int a,int b)
{
int c=a+b;
return c;
}
// formal parameter --> parameters are the parameters that are made at the time of creation of functions
// actual parameters --> parameters are those parameters that are passed through the function