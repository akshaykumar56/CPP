#include<iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor=1.04)
{
    return currentMoney*factor;
};
int main(){
int money=100000;
// below 1.04 is an example of default argument as i did not give any value but it compile it as a default
cout<<"if you have "<<money<<"in your account ,you will receive"<<moneyReceived(money)<<"Rs after one year"<<endl;
cout<<"if you have "<<money<<"in your account ,you will receive"<<moneyReceived(money,1.1)<<"Rs after one year"<<endl;
return 0;
}