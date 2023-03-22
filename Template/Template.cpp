#include<iostream>
 using namespace std;
template <class T1,class T2>
float funcavg(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    float d;
d=funcavg(7.9008,7.8);
cout<<"the average of two number is"<<d<<endl;

return 0;
}