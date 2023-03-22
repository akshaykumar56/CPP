// maps-->map is an associatice array
#include<iostream>
#include<map>
#include<string>
 using namespace std;

int main(){
map<string,int>marksMap;
marksMap["akshay"]=96;
marksMap["palsra"]=85;
marksMap["rahul"]=78;

marksMap.insert({"aakash",87});
marksMap.insert({"rohan",56});
map<string,int> :: iterator iter;
for(iter=marksMap.begin();iter!=marksMap.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}
return 0;
}