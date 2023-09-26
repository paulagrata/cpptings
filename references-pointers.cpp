/* 

references/pointers
[powerful features in C++; allow programmers to directly manipulate memory in order to optimize performance]

references - reference variable is an alias for something else [another name for an already existing variable]
- it is created using the & sign
- anything done to the reference also happens to the original.
- aliases cannot be changed to alias something else

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
