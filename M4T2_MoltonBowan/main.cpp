#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// CSC 134
// M4T2 - Menus
// Oriah Molton Bowman
// 27 Feb 2023
// Version 2 -- stated out character creator
//for Thudd

// menu function
void option_one () {
    // count from 0 to 9
    cout << "Using while() to count"<< endl;
    int num =0;
    while (num < 10){
     cout << num <<" " ;
     num ++;

}
cout<< endl;
cout << "Using for() to count"<< endl;
for (int i=0; i<10; i++) {
    cout << i <<" ";
}
cout << endl;
}
void option_two(){
 // dice roller
 int d6_1, d6_2,d6_3; // 3 DICE ( 6 SIDED)
 int total; // 3d6
 int

}
void option_three(){
//sum and average of dice
}
// there is no option fout


int main()
{
    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count "<< endl;
    cout << "Press 2 to roll dice " << endl;
    cout << "press 3 to roll a character "<< endl; // not implemented yet
    cout<< "Choice:";

    // TODO input validation



    int choice;
    cin >> choice;
    // user must pick 1,2,3,or 4
    while ( choice < 1|| choice >4){
        cout << "please choose 1,2,3,or 4: ";
        cin >> choice;
    }
    // if we get here we know choice is valid
    if(choice == 1){
        option_one(); // function call
    }

    return 0;
}
