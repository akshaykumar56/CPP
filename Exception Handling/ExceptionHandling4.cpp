#include<iostream>
 using namespace std;

int main(){
int a,b;
cout<<"enter values of a and b:"<<endl;
cin>>a>>b;
int x=a-b;
try
{
    if(x!=0)
    {
        cout<<"result(a/x)= "<<a/x<<"\n";
    }
    else // throw an exception
    {
        throw(x);    // throw int object
    }
}
catch(int i) // catches the exception
{ 
cout<<"exception caught: divided by zero\n";
}
cout<<"end";
return 0;
}