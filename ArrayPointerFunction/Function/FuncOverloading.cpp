#include<iostream>
 using namespace std;
float volume(int r)
{
 return 3.14*r*r;
}
float volume(int r,int h){
    return 3.14*r*r*h;
}
float volume(float a)
{
    return a*a*a;
}
int main()
{
int r,h;
float a;
cout<<"enter value of r :";
cin>>r;
cout<<"enter value of h :";
cin>>h;
cout<<"enter value of a :";
cin>>a;
cout<<"volume of circle is" <<volume(a);
return 0;
}