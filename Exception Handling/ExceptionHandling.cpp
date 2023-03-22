#include<iostream>
 using namespace std;
void divide(int x,int y,int z){
    cout<<"we are inside the function \n";
    if((x-y)!=0)   // it is OK
     {
         int R=z/(x-y);
         cout<<"result ="<<R<<endl;
     }
     else
     {
         throw(x-y); //function that cause an exception
     }
}
int main(){
    // try-->invoke a function that contains an exception
try
 {
        cout<<"we are inside the try block"<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    // to catch and handle the exception
    catch(int i)
    {
        cout<<"catch the exception \n";
    }
    return 0;
}