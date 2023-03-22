#include<iostream>
using namespace std;
 typedef union money
{
int rice;
char car;
float pounds;
} ep;
int main ()
{
ep m1;
m1.rice=34;
// m1.car='c';
// m1.pounds=123.34;
// cout<<m1.pounds<<endl;
cout<<m1.rice<<endl;
}

