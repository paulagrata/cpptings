/* 

vectors:
a vector is a sequence of elements that you can access by index.

need vector library:
#include <vector> 

syntax to create a vector:
std::vector<type> name;

create and initialize a location with specific values:
std::vector<double> location = {42.651443, -73.749302};

initialize our vector is by presizing [setting the size] - create and initialize a vector with two elements:
std::vector<double> location(2);

add a new element in vector:
.push_back() -> example: nameofvector.push_back("itemname");

remove an element in vector:
.pop_back()

get size/number of elements in vector:
.size()

*/

// ______________________________________________________________
//  main structure of a program:

#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult;
  std::vector<double> subway_child;
  
}
