#include<iostream>
#include<vector>
 using namespace std;
void display(vector<char> &v){
    for(int i=0;i<v.size();i++){
        cout<<("element :")<<v[i]<<endl;
    }
    cout<<endl;
}
int main(){
vector<char> vec1;
int element,size;
cout<<"enter the size of your vector"<<endl;
cin>>size;
for(int i=0;i<size;i++){
    cout<<("enter an element to add to this vector")<<endl;
    cin>>element;
    vec1.push_back(element);
}
// vec1.pop_back();
display(vec1);
vector<char>::iterator iter=vec1.begin();
// vec1.insert(iter+1,50,566);
display(vec1);
return 0;
};
