/* 

arrays:
an array is a data structure used in C++ to store a sequential collection of elements !![unlike vectors, its size cannot be changed]!!

need array library:
#include <vector> 

syntax to create an array:
int favoriteNums[4];
* in modern C++, strongly recommend using std::vector or std::array

create and initialize with custom values:
int favoriteNums[] = {7, 9, 15, 16};  -> do not have to specify size, but its good to for reducing errors
string cars[4] = {"volvo", "bmw", "ford", "mazda"};

change a value with a specific element:
cars[0] = "opel"; -> will now be string cars[4] = {"opel", "BMW", "Ford", "Mazda"};

get size of array:
  int myNumbers[5] = {1, 2, 3, 4, 5};
  int getArrayLength = sizeof(myNumbers) / sizeof(int);

  sizeof(int) - 4
  sizeof(myNumbers) - 20 bytes (20/4=5)
  getArrayLength - 5
  
  return 0;
}

*/

// ______________________________________________________________
//  main structure of a program with arrays - output: each line will print starting with 1 through 10

int main() {
  
   int nums[10];
    for (int i = 0; i < 10; ++i)
    {
        nums[i] = i + 1;
        std::cout << nums[i] <<"\n";
    }
}

// ______________________________________________________________
//  loops that work for arrays of any size
int main() {
    int myNumbers[5] = {2, 1, 6, 9, 13};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        std::cout << myNumbers[i] << "\n";
    }
}

