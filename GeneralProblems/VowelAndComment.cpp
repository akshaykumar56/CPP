#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   string str;
   int v_count=0,c_count=0;
   cout<<"\n enter the paragraph \n ";
   getline(cin,str);
   int n=str.length();
   for (int i = 0; i<n; i++)
   {
    if(int(str[i])>97 && int(str[i])<122 || int(str[i])>65 && int(str[i])<90)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
      {
          cout<<"\n vowel encountered \t"<<str[i];
          v_count++;
      }
      else
      {
          cout<<"\n consonant encountered \t"<<str[i];
          c_count++;
      }
    }
   }
cout<<"\n\n Total no of vowels are\t"<<v_count;
cout<<"\n\n Total no of consonants are\t"<<c_count;

return 0;
}
