#include <iostream>
using namespace std;
// CSC 134
// M4T2 - Menus
// Oriah Molton Bowman
// 27 Feb 2023

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
 // sum up five numbers
}
void option_three(){
//ToDO
}



int main()
{
    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count "<< endl;
    cout << "Press 2 to sum up numbers"<< endl;
    cout << "press 3 TODO" << endl;
    cout<< "Choice:";

    // TODO input validation



    int choice;
    cin >> choice;
    // user number
    while ( choice < 1|| choice >3){
        cout << "please choose 1,2,or 3: ";
        cin >> choice;
    }
    // if we get here we know choice is valid
    if(choice == 1){
        option_one(); // function call
    }

    return 0;
}
