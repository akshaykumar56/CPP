#include<iostream>
#include<iomanip>
 using namespace std;

int main()
{
int n;
cout<<"enter number :";
cin>>n;
do
{
    cout<<n<<setw(4);
    ++n;
}
while(n<=6);
return 0;
}