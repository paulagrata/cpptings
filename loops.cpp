/* loops:

while
for

*/

// incrementing for loop:
for (int i = 0; i < 20; i++) 
  {
  // statements
  }

// decrementing for loop:
for (int i = 20; i > 0; i--) 
  {
  // statements
  }


// ______________________________________________________________
//  program that asks and checks for a password - uses a while loop to ask the user for the password over and over again.
int main() {
  int pin = 0;
  int tries = 0;
  std::cout << "BANK OF LALA\n";
  std::cout << "Enter your PIN: ";
  std::cin >> pin;
  tries++;
  while (pin != 1234 && tries < 3) {
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
  }
  if (pin == 1234) {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
  }
}

// ______________________________________________________________
// program that asks the user to guess a number between 1-10 and the answer is 8 with while loop so that they can guess up to 50 more times
int main() {
 
  int guess;
  int tries = 0;
 
  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess != 8 && tries < 50) {
    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;
    tries++;
  }  
 
  if (guess == 8) {
    std::cout << "You got it!\n";
  }  
 
}

// ______________________________________________________________
// program that calculates and prints a simple list of squares

int main() {

  int i = 0;
  int square = 0;
  
  while (i < 10) {
  square = i * i;
  std::cout << i << "  " << square << "\n";
  i++;
  }
}



