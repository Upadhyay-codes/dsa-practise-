#include<iostream>
using namespace std;
int main () { 
    int a =3;
    int* b =&a;
    //*b = value of b ,,, &a - address of a baiscly &= adress and *=value if they are attach ith some variable . 
   cout << "the adress of a is " << &a << endl;
   cout << "the adress of a is " << b << endl;
   cout << "the value of b is " << *b << endl;
//    double pointer for ** 
   int** c = &b;
   cout << "address of b is"<< c << endl;
    return 0;
}