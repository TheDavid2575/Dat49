//Exercises to learn C++
//All saved to a Unix host

//------------------------------------------

//Print if number is odd or even

#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter number to see if it is odd or even: ";
        cin >> n;
                if (n % 2 == 0) {
                cout << "This number is even \n";
                }
                if (n % 2 != 0) {
                cout << "This number is odd \n";
                }

}

//------------------------------------------

//Convert USD to Bangladesh Currency

#include <iostream>
using namespace std;
int main() {
	double usd;
        double bds;
        cout << "Lets convert USD to Bangladesh currency. \n";
        cout << "USD: ";
        cin >> usd;
        bds = usd * 84;
        cout << "Bangladesh Taka: " <<bds;
        return 0;
}

//------------------------------------------

//Print Favorite color

#include <iostream>
using namespace std;
int main() {
	string fc;
        cout << "Please enter your favorite color: ";
        cin >> fc;
        cout << "Favorite color: " <<fc << ". \n";
}


//------------------------------------------





