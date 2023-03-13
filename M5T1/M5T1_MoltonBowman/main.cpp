#include <iostream>

using namespace std;
/*
 CSC 134
 MST1 - Simple Functions
 Oriah Molton Bowman
 3-13-23
 Purpose: to use a few void and value returning functions
 */
  // We can either define our functions before we need them,
// or declare them all at the top.
// The second option is cleaner.
// So, We put all the "function signatures" up top, above main.

void say_hello (); // prints hello
int double_a_number (int num); // returns number times 2
int add (int num1, int num2) ;// returns sum of 2 ints

int main()
{
    //cout << "Hello world!" << endl;
    say_hello();
    int num = double_a_number(2);
    return 0;
}
 //Define function. Like a dictionary, the definition is the
 // long version
 void say_hello(){
 // just print hello to stdout
 cout << " Hello!"<< endl;
 int my_num = 3;
 cout << my_num << " double is: "<< double_a_number(my_num)<<endl;
 cout << "give me two ints:  ";
 int first, second;
 cin >> first, second;

 int sum = add(first,second);
 cout << first << " + " << second << " = ";
 return;// a void return is implied
 }
 int double_a_number(int num){
 /*
 input: two integers
 output: their sum
 */
 int answer = num * 2;
 return answer;

 }
 int add(int num1, int num2){
 int sum = num1 + num2;
 return sum;
 }
