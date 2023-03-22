#include<iostream>
 using namespace std;
class student
{
    protected:
    int rollnumber;
    public:
    int set_rollnumber(int r)
    {
        rollnumber=r;
    }
    void print_rollnumber(void)
    {
        cout<<"the roll number of student is :"<<rollnumber<<endl;
    }
};
class subject :public student
{
    protected:
    int math;
    int physics;
    int chemistry;
    public:
    int set_marks(int a,int b,int c)
    {
        math=a;
        physics=b;
        chemistry=c;
    }
    void print_marks(void)
    {
        cout<<"the marks of student in physics is :"<<math<<endl;
        cout<<"the marks of student in physics is :"<<physics<<endl;
        cout<<"the marks of student in physics is :"<<chemistry<<endl;
    }
};
class result :public subject
{
    
    public:
    float percentage;
    void displayresult()
    {
       print_rollnumber();
       print_marks();
       cout<<"your result is "<<(math+physics+chemistry)/3<<"%"<<endl;
    }
}; 
int main()
{
result akshay;
akshay.set_rollnumber(12);
akshay.set_marks(93,95,96);
akshay.displayresult();
return 0;
}