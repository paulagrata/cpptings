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

pointers - 

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
