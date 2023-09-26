/* 

references/pointers
[powerful features in C++; allow programmers to directly manipulate memory in order to optimize performance]

references - reference variable is an alias for something else [another name for an already existing variable]
- it is created using the & sign
- anything done to the reference also happens to the original.
- aliases cannot be changed to alias something else

    pass-by-reference: refers to passing parameters to a function by using references
    *[when we passed parameters to a function, we used normal variables and that’s known as pass-by-value]*
    - when called, the function can modify the value of the arguments by using the reference passed in
    - allows:
        • modify the value of the function arguments
        • avoid making copies of a variable/object for performance reasons
    
    pass-by-reference with const:
    - const keywords tells the compiler that we won’t change something
    - cont reference saves the computational cost for a function that doesn’t modify the parameter value(s)
    - ensure the same thing: the parameter won’t be changed
    - by making a reference to the argument, this saves the computational cost of making a copy of the argument

memory address - 
-  “address of” operator -> & is used to get the memory address [the location in the memory] of an object
    • declare variable: int porcupine_count = 3;
    • find where the variable porcupine_count is stored on the computer: std::cout << &porcupine_count << "\n";
    • returns: 0x7ffd7caa5b54
- represented in hexadecimal
- usually denoted in hexadecimal instead of binary for readability and conciseness

double meaning of the & symbol can be tricky at first, so make sure to note:
- when & is used in a declaration, it is a reference operator
- when & is not used in a declaration, it is an address operator

pointers - a pointer variable is mostly the same as other variables, which can store a piece of data
- stores a memory address [unlike normal variables which store a value such as an int, double, char]
- recommend avoiding pointers as much as possible; usually, a reference will do the trick
-  must be declared before they can be used [just like a normal variable] 
- syntactically distinguished by the * [that int* means “pointer to int“ and double* means “pointer to double“]
    • variable called gum: int gum = 8;
    • create pointer: int* ptr = &gum;
        - int* makes it a pointer rather than a normal variable
        - ptr is the pointer name
        - &gum is the memory address of the other variable gum
        - now ptr has a value of gum‘s memory address

dereference: [the asterisk sign *] is used to obtain the value pointed to by a variable
- this can be done by preceding the name of a pointer variable with *

the double meaning of the * symbol can be tricky at first, so make sure to note:
- when * is used in a declaration, it is creating a pointer
- when * is not used in a declaration, it is a dereference operator

*/

// ______________________________________________________________
//  main structure of a reference:
#include <iostream>
int main() {
  int soda = 99;
  // setting pop as a reference to soda
  int &pop = soda;
  pop++;
  std::cout<<soda<<"\n"<<pop<<"\n";
}

// ______________________________________________________________
// script example of pass-by-reference: 
// the reference parameters are initialized with the actual arguments when the function is called
// int &i and int &j are the parameters of the function swap_num()
void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
int main() {
  int a = 100;
  int b = 200;
  // swap_num() is called, the values of the variables a and b will be modified because they are passed by reference
  swap_num(a, b);
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
}
// output: A is 200 B is 100
// using references as parameters allows us to modify the arguments’ values

// ______________________________________________________________
// script to show difference in pass-by-reference and pass-by-value
// pass-by-value version:
#include <iostream>
int triple(int i) {
  i = i * 3;
  return i;
}
int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";
}
// output: 3,3
// pass-by-reference version:
#include <iostream>
int triple(int &i) {
  i = i * 3;
  return i;
}
int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";
}
// output: 3,9

// ______________________________________________________________
// script to show pass-by-reference with const:
#include <iostream>
int square(int const &i) {
  return i * i;
}
int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}

// ______________________________________________________________
//  main structure of a pointer:
#include <iostream>
int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << ptr;
}

// ______________________________________________________________
//  script to show difference of pointer and dereference:
#include <iostream>
int main() {
  int power = 9000;
  // pointer
  int* ptr = &power;
  // print ptr, output: 0x7fffe8da253c
  std::cout << ptr << "\n";
  // print dereference *ptr, output: 9000 
  std::cout << *ptr;
}
