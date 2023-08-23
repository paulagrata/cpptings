/* 

classes/objects

classes - serves as a blueprint for objects, which are instances of the class [just like age is an instance of int - int age]
- empty classes are useless
- must declare a method inside the class if we want to define it outside
- by default, everything in a class is private [class members are limited to the scope of the class, ezer for not altering data]
- set class public [can use it to make everything below accessible outside the class]
- set private access modifier for when you want something below public to be private to the class

components of a class are called class members [you can access class members using the dot operator - object.class_member]
two types of class members:
- attributes [also known as member data] consist of information about an instance of the class.
- methods [also known as member functions] are functions that you can use with an instance of the class
  [use a . before method names to distinguish them from regular functions]

constructor - a special kind of method that lets you decide how the objects of a class get created
- has the same name as the class and no return type
- best when used to instantiate an object with specific attributes

object - an instance of a class that encapsulates data and functionality pertaining to that data
create (or instantiate) an object:     City nameofcity;
set object’s attributes values:        nameofcity.population = 123456789;
using a method created in a class      nameofcity.get_population();

*/

// ______________________________________________________________
//  main structure of a class with attribute and method:
class City {
  // attribute
  int population;
public:
  // method
  void add_resident() {
    population++;
  }
};

// ______________________________________________________________
//  script to get song title with class, attributes, + methods
// music.cpp -  instantiate a new song, add a title/artist, retrieve title/artist and print
#include <iostream>
#include "song.hpp"
int main() {
  Song electric_relaxation;
  electric_relaxation.add_title("Electric Relaxation");
  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist() << "\n";
  std::cout << electric_relaxation.get_title();
}
// song.hpp - song class
#include <string>
class Song {
  std::string title;
public:
  void add_title(std::string new_title);
  std::string get_title();
  void add_artist(std::string new_artist);
  std::string get_artist();
};
// song.cpp - song method defitions
#include "song.hpp"
void Song::add_title(std::string new_title) {
  title = new_title;
}
std::string Song::get_title() {
  return title;
}
void Song::add_artist(std::string new_artist) {
  artist = new_artist;
}
std::string Song::get_artist() {
  return artist;
}

// ______________________________________________________________
//  script to 
