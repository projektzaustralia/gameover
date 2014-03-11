// Game Over 2.0
// Demonstrates a using directive

#include <iostream>  /* a directive which is read and interpreted by the preproccessor.
                        iostream is a header that contains input output operations.*/
using namespace std; /* all elements of the standard library are declared within a namespace.
                        by using declarations you do not have to qualify each and every element */

int main() //initiates the declaration of a function
{
	cout << "Game Over!" << endl; // outputs to the console
	return 0; // basic program this tells the program that it completed successfully. you may return different values depending
                // where you want your program to go next.
}
