/* 
boop.
learning cpp
letsgobaby

this is a block comment
 */

// this is a line comment 

// codecademy day one: learn C++ "Hello World"

/*  main structure of a program

#include <iostream>
int main() {
  what program does here 
}

*/

// std::cout << "hayyyyyyy\n"; -> will print "hayyyy"

#include <iostream>

int main() {
  
  std::cout << "hayyyyyyy\n";
  
}

/*  running program:

g++ filename.cpp
./nameofnewfile.extension

real example:
g++ boop.cpp
./a.exe

OR EVEN BETTER - NAMING IT

g++ boop.cpp -o woahmayne
./woahmayne 

*/


/* VARIABLES

int: integer number                 ex: 0, 420
double: floating-point numbers      ex: 3.14, -200.0
char: individual characters         ex: a, @
string: a sequence of characters    ex: hello world, code
bool: true/false values             ex: true, false

*/


int main() {

  int score = 0;

  // change score here:
  score = 1234 * 99;
  
  std::cout << score << "\n";
  
}

#include <iostream>

int main() {
  
  int tip = 0;
  
  std::cout << "Enter tip amount: ";
  std::cin >> tip;                      //cin refers to the standard input stream (character input)
  
  std::cout << "You paid " << tip << " dollars.\n";
  
}



int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "“Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}


int main() {
  double weightOnEarth;
    const double marsGravity = 0.38;
    std::cout << "Enter the weight of the item on Earth (in pounds): ";
    std::cin >> weightOnEarth;
    double weightOnMars = weightOnEarth * marsGravity;
    std::cout << "The weight of the item on Mars would be: " << weightOnMars << " pounds.\n";

}
