#include<iostream>
 using namespace std;
template <class T>
class vector{
public:
T *arr;
int size;
vector(int m)                                          // constructor
{ 
    size=m;
    arr=new T[size];
}
T dotproduct(vector &v)
{
    T d=0;
    for(int i=0;i<size;i++)
    {
        d+=this->arr[i]* v.arr[i];
    }
    return d;
}
};
int main(){
vector <float> v1(3);
v1.arr[0]=6.9;
v1.arr[1]=8.7;
v1.arr[2]=5.4;
vector <float>v2(3);
v2.arr[0]=2.6;
v2.arr[1]=3.4;
v2.arr[2]=4.1;
float a = v1.dotproduct(v2);
cout<<a<<endl;
return 0;
}