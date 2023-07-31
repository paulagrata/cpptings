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
//  main structure of a program with vectors:

#include <iostream>
#include <vector>

int main() {
  std::vector<double> subway_adult;
  std::vector<double> subway_child;
}

// ______________________________________________________________
//  add costs and print total
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  double total = 0.0;
  for (int i = 0; i < delivery_order.size(); i++) {
  total  = delivery_order[i] + total ;
  }
  std::cout << total << "\n";
}

// ______________________________________________________________
//  program to find the sum of even numbers and the product of odd numbers in a vector

int main() {
 
  int total_even = 0;
  int product_odd = 1;
 
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};
 
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i] % 2 == 0) {
      total_even = total_even + vector[i];
    } else {
      product_odd = product_odd * vector[i];
    }
  }
   
  std::cout << "sum of even: " << total_even << "\n";
  std::cout << "product of odd: " << product_odd;
   
  }

// ______________________________________________________________
//  whaaaaaaaaaaaaaaaaaaale talk - will output "uueeieeauuee"
#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "turpentine and turtles.";
  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> whale_talk;

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        whale_talk.push_back(input[i]);
        if (input[i] == 'e' || input [i] == 'u') {
        whale_talk.push_back(input[i]);
        }
      }
    }
  }
  for (int k = 0; k < whale_talk.size(); k++) { 
    std::cout << whale_talk[k];
  }
  std::cout << "\n";
}
 
