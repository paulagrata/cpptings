/* Conditionals & Logic

if, else if, and else statements
switch statements
Relational operators
Logical operators

*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  // create a number that's 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;
  
  // if number is 0: heads
  // if it is not 0: tails
  if (coin == 0) {
    std::cout << "Heads\n";
  }
	else {
    std::cout << "Tails\n";
		
  }
}
