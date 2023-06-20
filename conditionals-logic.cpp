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

// ______________________________________________________________
/* relational operators:

== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to

*/

int main() {
  double ph = 4.6;
  if (ph > 7) {
    std::cout << "Basic";
  }
  else if (ph < 7) {
    std::cout << "Acidic";
  }
  else {
    std::cout << "Neutral";
  }


// ______________________________________________________________
/* switch statements:

a switch statement provides an alternative syntax that is easier to read and write
restriction on this expression is that it must evaluate to an integral type (int, char, short, long, long long, or enum)

*/

// displays case based on int number
int main() {  
  int number = 9;
  switch(number) {
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle\n";
      break;
    case 9 :
      std::cout << "Blastoise\n";
      break;
    default :
      std::cout << "Unknown\n";
      break;
  }
}


// ask what their earth weight is, ask to enter a number for the planet he wants to fight on, + compute weight on the destination planet
int main() {
 
  double weight;
  int x;
 
  std::cout << "Please enter your current earth weight: ";
  std::cin >> weight;
 
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
 
  std::cout << "Which planet are you visiting? ";
  std::cin >> x;
 
  if (x == 1) {
    weight = weight * 0.78;
  } else if (x == 2) {
    weight = weight * 0.39;
  } else if (x == 3) {
    weight = weight * 2.65;
  } else if (x == 4) {
    weight = weight * 1.17;
  } else if (x == 5) {
    weight = weight * 1.05;
  } else if (x == 6) {
    weight = weight * 1.23;
  }
  std::cout << "\nYour weight: " << weight << "\n";
}


// ______________________________________________________________
/* logical operators:

&&: the and logical operator
||: the or logical operator
!: the not logical operator

( !true ) returns false
( !false ) returns true			note: The keyword not can be used in the place of !
( !(10 < 11) ) returns false

*/

// if hungry AND angry = true then print hangry
int main() {
  int hunger = true;
  int anger = true;
  if (hunger && anger) {
    std::cout << "hangry!!!!!!!!!!\n";
  }
}

// if day=6 OR day=7 print weekend
int main() {
  int day = 6;
  if (day == 6 || day == 7) {
    std::cout << "weekend\n";
  }
}

//  not logical operator is denoted by !
int main() {
  bool dirty_laundry = false;
  if (!dirty_laundry) {
    std::cout << "Adulting!\n";
  }
}
// can also be written as:
if (dirty_laundry == false) {
  std::cout << "Adulting!\n";

// leap year - take a year as input, check to see if the year is a four-digit number, displays whether or not the year falls on a leap year
int main() {
  int y = 0;
  std::cout << "Enter year: ";
  std::cin >> y;
  if (y < 1000 || y > 9999) {
    std::cout << "Invalid entry.\n";
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    std::cout << y;
    std::cout << " falls on a leap year.\n";
  }
  else {
    std::cout << y;
    std::cout << " is not a leap year.\n";
  }
}
 
