#include <iostream>
using namespace std;

int main() {
  int var = 5; 

  int* pointVar = &var; //declare the pointer

  //pointVar = &var; //give the pointer the address

  //cout << "pointVar address" << pointVar << endl;         //var0x7ffee30db7c8 this is the reference int var = 5 int* pointVar.

  //cout << "Value of var " << var << endl;                //5

  cout << "Value from address " << *pointVar << endl;    //5

  return 0;
}