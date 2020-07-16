#include "Vector.h"
#include <iostream>
using namespace std;

int main (int argc, char * const * argv) {

	//constructor tests
	Vector one(1, 2, 0);
	Vector two(2, 1, 0);

	cout << "One is " << one;
	cout << "Two is " << two;

	//Addition and subtraction
	cout << "one + two is " << (one+two);
	cout << "one - two is " << (one-two);

	//dot and cross
	cout << "one dot two is " << one.dot(two) << "\n";
	cout << "one cross two is " << one.cross(two);
}
