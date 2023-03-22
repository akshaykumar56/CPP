#include<iostream>
#include<conio.h>
#include<cstring>
#include<ctype.h>

using namespace std;
void main()
{
int i=0;
char *p[10]={
    "books",
    "television",
    "computer",
    "sports"
};
char str[25];
clrscr();
cout<<"enter nnsme of your favorite leisure pursuit :";
cin>> str;
for(i=0 ;i<4;i++)
{
    if(!strcmp(str,*p[i]))
    {
        cout<<"your favorite pursuit " << "available here"<<endl;
        break;
    }
}
if(i==4)
cout<< "your favorite " << " not available here"<<endl;
getch();
}