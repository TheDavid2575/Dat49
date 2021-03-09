//Exercise for C++ on Unix hosted pc

/*
1) Use a for loop to print the odd numbers from 1 to 15 on the screen

2) Use a while loop to print numbers 1 to 25 on the screen

3) Use a do-while loop to print numbers 1 to 20 on the screen

4) Use a loop structure to calculate the sum of all odd numbers from 1 to 25

5) Use a loop structure to calculate the product of all even numbers from 1 to 13.
*/

//-----------------------------------

// 1

#include <iostream>
using namespace std;
int main() {
	for (int x = 1; x <= 15; x++) {
                cout << x << " \n";
        }
}

//-----------------------------------

// 2

#include <iostream>
using namespace std;
int main() {
	int x = 1;

        while(x <= 25) {
        cout << x << " \n";
        x++;
	}
}

//-----------------------------------

// 3

#include <iostream>
using namespace std;
int main() {
	int x = 1;
        do {
            	cout << x << " ";
                x++;
        }
	while (x <= 20);
}

//-----------------------------------

// 4

#include <iostream>
using namespace std;
int main() {
	int sum = 0;
        for (int x = 1; x <= 25; x++) {
                if (x % 2 != 0) {
                        sum = sum + x;
                }
        }
	cout << sum << " \n";
}


//-----------------------------------

// 5

#include <iostream>
using namespace std;
int main() {
	int prod = 1;
        for (int x = 1; x <= 13; x++) {
        prod = prod * x;
        }
	cout << prod << " \n";
}
