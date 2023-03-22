#include<iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) 
    {
        counter =0;
        }
    void getPrice(void);
    void display(void);
};
void shop :: getPrice(void){
cout<<"enter Id of our item"<<counter+1<<endl;
cin>>itemId[counter];
cout<<"enter price of our item"<<endl;
cin>>itemprice[counter];
counter ++;
}
void shop ::display(void){
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item with ID "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
shop dukkan;
dukkan.initcounter();
dukkan.getPrice();
dukkan.getPrice();
dukkan.getPrice();
dukkan.getPrice();
dukkan.display();
return 0;
}