/* 

functions:
a function is a named group of code statements that accomplish something together

built in functions:
#include <cmath>
#include <string>

declaration: this includes the function’s name, what the return type is, and any parameters 
             (if the function will accept input values, known as arguments)
definition: also known as the body of the function, this contains the instructions for 
             what the function is supposed to do.

basic structure:
return_type function_name(any,parameters,you,have) {
   // Code block here
   return output_if_there_is_any;
}

void - the point of no return:
a void function also known as a subroutine has no return value, making it ideally suited for 
situations where you just want to print stuff to the terminal

function with parameters requirements:
- function call must include the same number of arguments as there are parameters
- corresponding arguments must be passed in the same order

scope is the region of code that can access or view a given element
- variables defined in global scope are accessible throughout the program
- variables defined in a function have local scope and are only accessible inside the function

put functions in multi-file programs:
- main prorgram [main.cpp]
- seperate file for header [functions.hpp]
   ⭒ the header is for declaring the functions, can end in .hpp or .h
- seperate file for functions [functions.cpp]
- execute 'g++ main.cpp functions.cpp'
ex:
[main.cpp]
#include <iostream>
#include "functions.hpp"   -> must include the header file
int main() {
  std::cout << average(8.0, 19.0) << "\n";
}
[functions.hpp]
double average(double num1,double num2); 
[functions.cpp]
#include <iostream>
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

inline:
an inline function advises the compiler to insert the function’s body where the function call is
*does can increase/decrease execution speed*
- inline is something you’ll encounter + may never use
- inline functions are just member functions (functions inside of classes)
  which have been defined and declared in a single line in a header file
- ALWAYS add the inline keyword if you are inlining functions in a header 
(unless you are dealing with member functions, which are automatically inlined for you)
- example below

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

// ______________________________________________________________
// multiple arguments:
#include <iostream>
void name_x_times(std::string name, int x) {
  while (x>0) {
    std::cout << name;
    x--;
  }
}

int main() {
  std::string my_name = "lala!";
  int some_number = 5;
  name_x_times(my_name,some_number);
}

// ______________________________________________________________
// find average of two numbers
#include <iostream>
double average(double num1,double num2) {
  return (num1 + num2) / 2;
}

int main() {
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
}

// ______________________________________________________________
// find number to the 10th power using cmath built in function library
#include <iostream>
#include <cmath>
int tenth_power(int num) {
  return pow(num,10);   // pow - power built in function
}

int main() {
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
}

#include <iostream>
#include <vector>

// ______________________________________________________________
// find first three multiples of num
#include <iostream>
#include <vector>
std::vector<int> first_three_multiples(int num) {
  std::vector<int> multiples{num, num * 2, num * 3};
  return multiples;
}

int main() {
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
}

// ______________________________________________________________
// water the plant
#include <iostream>
std::string needs_water(int days, bool is_succulent) {
  if (days > 3 && is_succulent == false) {
    return "time to water the plant.";
  } else if (days < 13 && is_succulent) {
    return "do NOT water the plant!";
  } else if (days >= 13 && is_succulent) {
    return "go ahead and give the plant a little tiny bit of water.";
  } else {
    return "do NOT water the plant!";
  }
}

int main() {
  std::cout << needs_water(10, false) << "\n";
}

// ______________________________________________________________
// palindrome??
#include <iostream>
bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  if (reversed_text == text) {
    return true;
  }
  return false;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}

// ______________________________________________________________
// inline example with execution speed test [0.024179-0.022036]
// [main.cpp]
#include <iostream>
#include <chrono>
#include "night.hpp"
int main() {
  // measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
  std::cout << goodnight1("tulip");
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;
  // print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  std::cout << goodnight2("eraser", "ivy");
}
// [night.hpp]
inline    // need this, remove for testing original without inline 
std::string goodnight1(std::string thing1) {    // switch to declaration for testing -> 
  return "Goodnight, " + thing1 + ".\n";        // std::string goodnight1(std::string thing1);
}                                               // move this function to night.cpp
std::string goodnight2(std::string thing1, std::string thing2);
// [night.cpp]
#include <string>
// add goodnight1 function here for testing speed
std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}

