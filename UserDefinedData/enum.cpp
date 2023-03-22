#include<iostream>
using namespace std;
int main()
{
enum meal{breakfast,lunch,dinner};
// meal m1=dinner;
meal m1=breakfast;
// meal m1=lunch;
cout<<(m1==2);
return 0;
}