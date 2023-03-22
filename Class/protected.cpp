#include<iostream>
 using namespace std;
class base{
    int a;
    protected:
    int b;
}
int main(){
/* for a protected membre:
                           public derivation      private derivation    protected derivation
1. private membre           not inherited             not inherited        not inherited
2.protected membre           protected                 private              protected
3.public membres              public                  private                protected
*/
return 0;
}