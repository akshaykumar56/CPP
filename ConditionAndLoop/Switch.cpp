#include<iostream>

using namespace std;
int main()
{
    int n;
   cout<<"enter number"<<endl;
   cin>>n; 
   switch (n)
    {
        case 11:
        cout<<"today is monday"<<endl;
        break;
        case 12:
        cout<<"today is tuesday"<<endl;
        break;
        case 13:
        cout<<"today is wednesday"<<endl;
        break;
       case 14:
        cout<<"today is thursday"<<endl;
        break;
        case 15:
        cout<<"today is friday"<<endl;
        break;
        case 16:
        cout<<"today is saturday"<<endl;
        break;
        case 17:
        cout<<"today is sunday"<<endl;
        break;
         default:
         cout<<"no special case"<<endl;
         break;
         return 0;
    }
}