#include<iostream>
 using namespace std;
void test(int x)
{
    try
    {
        if(x==1) throw x;  //int
    else if 
    {
        (x==0) throw 'x';
    }
    else if
     {
        (x==0) throw 'x';
     }
        cout<<"end of try block"<<endl;
    }
 catch(char c)
{
    cout<<"caught an character "<<endl;
}
catch(int m)
{
    cout<<"caught an interger"<<endl;
}
catch(double d)
{
    cout<<"caught an double "<<endl;
}
cout<<"end of try-catch system"<<endl;
}

int main(){
    cout<<"testing multiple catches"<<endl;
    cout<<"x==1"<<endl;
    test(1);
    cout<<"x==0"<<endl;
    test(0);
    cout<<"x==-1"<<endl;
    test(-1);
    cout<<"x==2"<<endl;
    test(2);
return 0;
}