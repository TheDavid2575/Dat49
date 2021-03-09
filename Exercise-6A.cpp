//5 Exercises that helped me learn C++ / 
//All saved to a Unix Host

------------------------------------------------

//Print whats below

#include <iostream>
using namespace std;
  int main() {
  cout << “David, Perez”
  return 0;
  }

------------------------------------------------
 
//Print whats below
  
  #include <iostream>
Using namespace std;
int main() {
		cout << “Welcome to C++”;
		return 0;
}
 
------------------------------------------------
  
//Calculate Weekly earnings/salary
  
#include <iostream>
using namespace std;
int main() {
	int x, y;
        cout << "Lets calculate the salary of an employee! \n";
        cout << "Please enter the  hourly pay rate: ";
        cin >> x;
        cout << "Please enter the amount of hours worked this week: ";
        cin >> y;
        int z = x * y;
        cout << "Your salary for this week is: " <<z << ". \n";
        return 0;
}

------------------------------------------------
  
//Calculate Area of rectangle
  
  #include <iostream>
using namespace std;
int main() {
	int l, w;
        cout << "Lets calculate the area of a rectangle! \n";
        cout << "Please enter the width: ";
        cin >> w;
        cout << "Please enter the length: ";
        cin >> l;
        int a = l * w;
        cout << "The area of the rectangle is: " <<a << ". \n";
}

------------------------------------------------
  
//Calculate area of circle 
  
#include <iostream>
using namespace std;
int main() {
	int pi = 3.14;
        int radius;
        cout << "Lets calculate the area of a circle! \n";
        cout << "Please enter the radius: ";
        cin >> radius;
        int a = radius * radius * pi;
        cout << "The area of the circle is: " <<a << ". \n" ;
}
