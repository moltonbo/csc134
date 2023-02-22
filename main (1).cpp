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
int square (int num){
// input: num, an intger
  // output num square
  return  num * num;
  
}

int main() {
  // call function
  int times = 0 ;
 cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times);

  // part 2 table of squares
 // The worlds first " real program " running on a stored program 
// computer ( David Wheeler, Cambridge May 6, 1949)

int i=0;
  int max =10;
  cout << "How many nuber in the table of square? ";
  cin >> max;
  cout << " Table of squares from 0 to "<< max << endl;
  cout << "Number" << "\t" << "Square"<< endl;
  cout << "_______________" << endl;

    
    while (i <= max){
cout << i << "\t" << square(i) <<endl;
    i++; // or i = i+1
    
  }
    
  
  }