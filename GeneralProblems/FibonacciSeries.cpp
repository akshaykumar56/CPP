#include<iostream>
using namespace std;
int fib(int n){
if(n<2){
    return 1;
}
return fib(n-2) +fib(n-1);
}
int main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"fibonacci of number equal to "<<fib(n);
return 0;
}