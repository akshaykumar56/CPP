#include<iostream>
#include<list>
 using namespace std;
void display(list<int> &lst)
{
    list<int> :: iterator it;
   for(it=lst.begin();it!=lst.end();it++)
   {
    cout<< *it<<" ";
}
cout<<endl;
}
int main(){
list<int> list1;  // list of 0 length
list <int> list2; // empty list of size 7
list1.push_back(5);
list1.push_back(7);
list1.push_back(8);
list1.push_back(4);
list1.push_back(1);
// list<int> ::iterator iter;
// iter =list1.begin();
// cout<< *iter<<" ";
// iter++;
// cout<< *iter<<" ";
// iter++;
// cout<< *iter<<" ";
// iter++;
// cout<< *iter<<" ";
// iter++;
// cout<< *iter<<" ";
// iter++;
list2.push_back(4);
list2.push_back(6);
list2.push_back(9);
// remove elements from list
// list1.pop_front();
// list1.pop_back();
// list1.remove(8);
list1.sort();
list2.sort();
// list1.merge(list2);
list1.reverse();
list2.reverse();
list1.merge(list2);
display(list1);
display(list2);
return 0;
}