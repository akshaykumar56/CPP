#include<iostream>
 using namespace std;

int main()
{
    int i;
int A[5]={1,6,4,5,7};
// for (i=0;i<5;i++)
// {
// cout<<"the value of A"<<i<<":"<<A[i] <<endl;
// }
// print of array element using pointers
A[3]=9;
int *p=A;
cout<<"the value of A[0] is "<<*p<<endl;
cout<<"the value of A[1] is "<<*(p+1)<<endl;
cout<<"the value of A[2] is "<<*(p+2)<<endl;
cout<<"the value of A[3] is "<<*(p+3)<<endl;
cout<<"the value of A[4] is "<<*(p+4)<<endl;
return 0;
}