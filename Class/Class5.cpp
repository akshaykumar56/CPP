#include<iostream>
using namespace std;
class complex
{
    public:
    int a;
    int b;
//     complex(void)
// {
//     a=10;
//     b=6;
// }
complex(int m,int n=87)
{
    a=m;
    b=n;
}
complex(complex &i)
{
    a=i.a;
    b=i.b;
}
void printnumber()
{
    cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
}
};

int main(){
    complex c(5,10);
    c.printnumber();
    complex d;
    d.printnumber();
    complex e(c);
    e.printnumber();
return 0;
}
