/* 

classes/objects

classes - serves as a blueprint for objects, which are instances of the class [just like age is an instance of int - int age]
- empty classes are useless
- must declare a method inside the class if we want to define it outside

components of a class are called class members [you can access class members using the dot operator - object.class_member]
two types of class members:
- attributes [also known as member data] consist of information about an instance of the class.
- methods [also known as member functions] are functions that you can use with an instance of the class
  [use a . before method names to distinguish them from regular functions]

object - an instance of a class that encapsulates data and functionality pertaining to that data
create (or instantiate) an object:
City nameofcity;
set object’s attributes values:
nameofcity.population = 123456789;
using a method created in a class [see below example]
nameofcity.get_population();
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
