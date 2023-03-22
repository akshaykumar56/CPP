// function overloading means using one function with common name multiple times 
// the numbe of data types varry
#include<iostream>
using namespace std;
float volume(int r,int h)
{
    cout<<"volume of cylindre is:"<<endl;
    return 3.14*r*r*h;
}
int volume(int l,int b,int h){
    cout<<"volume of cuboid is :"<<endl;
    return l*b*h;
}
int volume(int a)
{
    cout<<"the volume of cube is:"<<endl;
    return a*a*a;
}
int main(){
    cout<<"the volume of cuboid is:"<<volume(5,3,6)<<endl;
    cout<<"the volume of sphere is:"<<volume(2,4)<<endl;
    cout<<"the volume of cube is:"<<volume(6)<<endl;

return 0;
}