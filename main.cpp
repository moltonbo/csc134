#include <iostream>
using namespace std;
/* oriah molton bowman
csc134
feb 22 23
  */

// define some function we in main
void say_hello(int count) {
// repeat count time
  int i=0; // idex
while (i< count) {
  cout << "Hello #"<< i + 2 << endl;
  i++;
  }
  return; // for void functions,return is optional 
}
int main() {
  // call function
  int times = 0 ;
 cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times);
}