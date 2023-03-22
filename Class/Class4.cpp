// oops-classes and objects
//c++ --> initiallly called --> C with classes by stroustroup
//extenstion of structure
// structure had limitations
//         --> members are public
//            No methods
//classes--> structure +more
//classes -->can have methods and properties
//classes-->can make few membre as private and few as public
//structures in C++ are typedefed
 //nesting of membre function






#include<iostream>
#include<string>
using namespace std;
class binary
{
     private:
     string s;
    void chk_bin(void);
    public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
 
void binary ::read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary ::chk_bin(void)
{
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i) !='0'  &&  s.at(i) !='1')
        {
          cout<<"incorrect binary format"<<endl; 
         
        }
    }
}
void binary ::ones_complement(void)
{
    chk_bin();
  for (int i=0;i<s.length();i++)
  {
      if(s.at(i)=='0')
      {
          s.at(i)='1';
      }
      else
      {
          s.at(i)='0';
      }
  }  
}
void binary ::display(void)
{
    cout<<"displaying your binary number"<<endl;
    for (int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();
return 0;
}