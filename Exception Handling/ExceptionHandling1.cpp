#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values of a and b"<<endl;
    cin>>a;
    cin>>b;
    int x=a-b;
    try
    {
        if(x !=0)
        {
            cout <<"result ="<<a/x<<endl;
        }
        else
        {
            throw(x);  // throw int object
        }
       }
    catch(int i)
    {
      cout<<"exception caught :divide by zero"<<endl;
    }
    cout<<"end";
    return 0;
}