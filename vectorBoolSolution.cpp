#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic use of std::vector<bool>
  std::vector<bool> boolVector(10);
  boolVector[0] = true; 
  boolVector[5] = true;

  // Using bitset instead
  std::bitset<10> bitsetVector;  //Clear and direct
  bitsetVector[0] = 1;
  bitsetVector[5] = 1;

  std::cout << "bitsetVector: " << bitsetVector << std::endl;

  // Alternatively, if you need random access with bool values, a regular std::vector<bool> can be used, and we can access the element directly
  std::vector<bool> boolVector2(10,false);
  boolVector2[0] = true;
  boolVector2[5] = true;
  std::cout << "boolVector2[0]: " << boolVector2[0] << std::endl; //Correctly return true

  return 0;
}