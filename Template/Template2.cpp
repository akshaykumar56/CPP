#include<iostream>
 using namespace std;
 template<class T>
class harry{
    public:
    T data;
    harry(T a){
        data=a;
    }
    void Display(T a)
    {
        data=a;
        cout<<data;
    }
};
int main(){
harry <int> h(5.7);
cout<<h.data;
return 0;
h.Display(6);
}