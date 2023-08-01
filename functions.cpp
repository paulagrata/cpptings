/* 

functions:
a function is a named group of code statements that accomplish something together

built in functions:
#include <cmath>
#include <string>

declaration: this includes the function’s name, what the return type is, and any parameters (if the function will accept input values, known as arguments)
definition: also known as the body of the function, this contains the instructions for what the function is supposed to do.

basic structure:
return_type function_name(any,parameters,you,have) {
   // Code block here
   return output_if_there_is_any;
}

void - the point of no return:
a void function also known as a subroutine has no return value, making it ideally suited for situations where you just want to print stuff to the terminal

*/

// ______________________________________________________________
// basic program with random built-in function:
#include <iostream>
int main() {
  // seeds the random number generator:
  srand (time(NULL));
  // rand() initializes the_amazing_random_number
  int randomNum = rand() % 13;
  std::cout << randomNum;
  
}

// ______________________________________________________________
// basic structure creating function:
#include <iostream>
void make_sandwich() {
  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "bacon\n";
  std::cout << "bread\n";
}
int main() {
  make_sandwich()
}

// ______________________________________________________________
// function for feed cat message, main returns message and declares it as cat_message variable
#include <iostream>
std::string feed_kitten() {
  return "kit is fed!";
}
int main() {
  std::string cat_message = feed_kitten();
  std::cout << cat_message;
}

// ______________________________________________________________
// define a void function that accepts a string paremeter
#include <iostream>
void get_emergency_number(std::string emergency_number) {
  std::cout << "Dial " << emergency_number << "\n";
}
int main() {
  // original emergency services number 
  std::string old_emergency_number = "999";
  // new number
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  // get and print number with function above
  get_emergency_number(new_emergency_number); 
}
