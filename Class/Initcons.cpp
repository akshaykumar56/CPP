#include<iostream>
 using namespace std;
class test{
    int a;
    int b;
    public:
    // test(int i,int j):a(i),b(j) 
    // test(int i,int j):a(i),b(i+j)
    // test(int i,int j):a(i),b(2*j)
    test(int i,int j):a(i),b(a+j)
    //test(int i,int j):b(j),a(i+b) --> does not give desired result beause a must be initialise first
    {
        cout<<"constructer executed"<<endl;
      cout<<"value of a is "<<a<<endl;
      cout<<"value of b is "<<b<<endl;
    
    }
};
int main(){
 test t(4,6);

return 0;
}