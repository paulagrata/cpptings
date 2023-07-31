/* 

arrays:
an array is a data structure used in C++ to store a sequential collection of elements !![unlike vectors, its size cannot be changed]!!

need array library:
#include <vector> 

syntax to create an array:
int favoriteNums[4];
* in modern C++, strongly recommend using std::vector or std::array

create and initialize with custom values:
int favoriteNums[] = {7, 9, 15, 16};

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

