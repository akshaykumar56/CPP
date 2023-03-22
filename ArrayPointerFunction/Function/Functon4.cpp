// functions and function prototypes
#include <iostream>
using namespace std;
// Function prototype
// type function-name(arguments);
int sum(int , int );

int main()
{
    int num1, num2;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "the sum is " << sum(num1, num2);d
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
 return c;
} // formal parameters a and b will be taking values from actual parameters num1 and num 2.