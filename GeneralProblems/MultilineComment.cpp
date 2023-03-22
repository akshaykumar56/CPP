#include<iostream>
 using namespace std;

int main()
{
  char com[1000];
  int i=2,a=0;

  // take input
  cout<<"enter the line of code \n";
  cin>>com;

  // if condition
  if(com[0]=='/')
  {
    if(com[1]=='/')
    cout<<"it is a comment";
    else if(com[1]=='*')
    {
        for (int i = 2; i < 1000; i++)
        {
            if(com[i]=='*' && com[i+1]=='/')
            {
                cout<<"it is a multiline comment";
                a=1;
                break;
            }
            else 
            continue;
        }
    }
    if(a==0)
            {
            cout<<"it is multiline a comment \n";
            }
            else
            {
                cout<<"it is not a comment";
            }
  }
return 0;
}