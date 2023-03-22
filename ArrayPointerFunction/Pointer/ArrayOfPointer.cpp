#include<iostream>
 using namespace std;

int main()
{
int A[6]={1,4,6,8,7,4};
int i,*ptr[6];
for(i=0;i<6;i++)
{
    ptr[i]=&A[i];
}
for(i=0;i<6;i++)
{
    cout<<"the value at A["<<i<<"] :"<<*ptr[i]<<endl;
}
return 0;
}