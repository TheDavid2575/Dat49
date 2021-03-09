// Exercise using if statements

/* 
Task:
Do a research on the Internet and find the different income ranges in the US and create a C++ program using if/else statement to determine the income level of
the user. You should atleast have 4 income levels and the user will input his/her income and the program will inform the  user of his/her income level. 
*/

//---------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
	int x;

        cout << "Please enter your income to determine your income level : ";
        cin >> x;

                if(x <= 40000) {
                cout << "You are in the lowest class";
                }

                else if(x > 40000 && x <= 60000) {
                cout << "You are in the middle class";
                }

                else if(x > 60000 && x <= 80000) {
                cout << "You are in the high class";
                }

                else if(x > 80000) {
                cout << "You are rich";
                }

                else {
                cout << "Invalid";
                }

        cout << " \n";
}
