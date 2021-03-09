//C++ Exercises used to learn the language and Unix 
//All saved to a Unix host

//------------------------------------
  
//Convert USD to CD

#include <iostream>
using namespace std;
int main() {
	double usd;
        cout << "Convert USD to Canadian Dollars";
        cout << "Enter USD: ";
        cin >> usd;
        double cd = usd * 1.4;
        cout << "Canadian Dollars: " << cd << ". \n";
        return 0;
}

//------------------------------------

//Calculate commision (10%)

#include <iostream>
using namespace std;
int main() {
	double sales;
        cout << "Lets calculate your commision \n";
        cout << "Sales for this week: ";
        cin >> sales;
        double com = sales * .10;
        cout << "Commision: " << com << ". \n";
        return 0;
}

//------------------------------------

//Print major on screen

Code:
#include <iostream>
using namespace std;
int main() {
	string x;
        cout << "What is your major? \n";
        cin >> x;
        cout << "Your major is: " << x << ". \n";
}

//------------------------------------

//Calculate mileage

#include <iostream>
using namespace std;
int main() {
	double d;
        double g;
        cout << "Please enter distance traveled: ";
        cin >> d;
        cout << "Please enter gas used: ";
        cin >> g;
        double m = d / g;
        cout << "Milage: " << m << ". \n";
        return 0;
}

