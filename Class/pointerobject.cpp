#include<iostream>
 using namespace std;
class shopitem{
int id;
float price;
public:
void setdata(int a,float b){
id=a;
price=b;
}
void getdata(){
    cout<<"code of item is :"<<id<<endl;
    cout<<"price of this item is "<<endl;
}
};
int main(){
int size =3;
int p,q;
for(int i=0;i<size;i++){
cout<<"enter id and price of item "<<i+1;
cin>>p>>q;
ptr->setdata(p,q);
ptr++;
}

return 0;
}