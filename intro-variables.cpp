/* 
boop.
learning cpp
letsgobaby

this is a block comment

codecademy day one: learn C++ "Hello World"
 */
// this is a line comment 

// ______________________________________________________________
/*  main structure of a program:

#include <iostream>
int main() {
  what program does here 
}

*/

#include <iostream>
int main() {
  std::cout << "hayyyyyyy\n";     // -> will print "hayyyyyyy"
}


// ______________________________________________________________
/*  ** running program: **

g++ filename.cpp
./nameofnewfile.extension

real example:
g++ boop.cpp
./a.exe

OR EVEN BETTER - NAMING IT

g++ boop.cpp -o woahmayne
./woahmayne 

*/

// ______________________________________________________________
/* VARIABLES

int: integer number                 ex: 0, 420
double: floating-point numbers      ex: 3.14, -200.0
char: individual characters         ex: a, @
string: a sequence of characters    ex: hello world, code
bool: true/false values             ex: true, false

*/

// ______________________________________________________________
// displaying variable with computions
int main() {
  int score = 0;
  score = 1234 * 99;
  std::cout << score << "\n";
}

// ______________________________________________________________
// displaying user's inputed value
int main() {
  int tip = 0;
  std::cout << "Enter tip amount: ";    //ask user for input  -> cout
  std::cin >> tip;                      //cin refers to the standard input stream (character input), declare tip -> cin
  std::cout << "You paid " << tip << " dollars.\n";
}

// ______________________________________________________________
// converting fahrenheit to celsius
int main() {
  double tempf;
  double tempc;
  std::cout << "“Enter the temperature in Fahrenheit: ";      //ask user for input
  std::cin >> tempf;  
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}

// ______________________________________________________________
// converting weight on earth to weight on mars
int main() {
  double weightOnEarth;
  const double marsGravity = 0.38;
  std::cout << "Enter the weight of the item on Earth (in pounds): ";
  std::cin >> weightOnEarth;
  double weightOnMars = weightOnEarth * marsGravity;
  std::cout << "The weight of the item on Mars would be: " << weightOnMars << " pounds.\n";
}

// ______________________________________________________________
// quadratic formula
int main() {
  double a, b, c;
  double root1, root2;

  std::cout << "enter a: ";
  std::cin >> a;
  std::cout << "enter b: ";
  std::cin >> b;
  std::cout << "enter c: ";
  std::cin >> c;

  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  std::cout << "root 1: " << root1 << "\n";
  std::cout << "root 2: " << root2 << "\n";

  return 0;
}
