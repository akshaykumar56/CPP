#include<iostream>
 using namespace std;

int main()
{
int A[6]={1,2,3,5,6,7};
// for(int i=0;i<6;i++)
// {
//     cout<<"print array element A["<<i<<"]"<<A[i]<<endl;
// }
int *p=A;
cout<<"the value of A[0] is "<<*p<<endl;
cout<<"the value of A[1] is "<<*(p+1)<<endl;
cout<<"the value of A[2] is "<<*(p+2)<<endl;
cout<<"the value of A[3] is "<<*(p+3)<<endl;
cout<<"the value of A[4] is "<<*(p+4)<<endl;
cout<<"the value of A[5] is "<<*(p+5)<<endl;
return 0;
}