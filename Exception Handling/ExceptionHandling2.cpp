#include<iostream>
 using namespace std;
void test(int x)
{
    try
    {
      if(x==1) 
      {
          throw x;
          }   
     if(x==0) 
      {
          throw 'x'; 
          }
     if(x==2) 
      {
      throw 1.0; //double
      }
      cout<<"end of try-block "<<endl;
    }

    catch(char)
    {
        cout<<"caught an character "<<endl;
    }
    catch(int)
    {
        cout<<"caught an interger "<<endl;
    }
    catch(double)
    {
        cout<<"caught an double "<<endl;
    }
}
int main()
{
    
cout<<"testing multiple catches"<<endl;
test(1);
test(0);
test(2);

return 0;
}