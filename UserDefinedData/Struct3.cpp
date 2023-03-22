#include<iostream>
#include<iomanip>
using namespace std;
struct book
    {
        int page;
        char author[50];
        float price;
    };
int main()
{
    book book1;
    cout<<"enter page:";
    cin>>book1.page>>endl;
    cout<<"enter author name: ";
    cin.get(book1.author,50)>>endl;
    cout<<"enter price: ";
    cin>>book1.price>>endl;
    cout<<"number of pages in book1: " <<book1.page<<endl;
    cout<<"author of book1:"<<book1.author<<endl;
    cout<<"pricee of book1 is "<<book1.price;
    return 0;
}