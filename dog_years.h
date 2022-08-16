#include <iostream>

int main() {
  
 int dog_age;
 dog_age = 14;

 //This dog's is 14 years old

  int early_years;
  int later_years;
  int human_years;

  early_years = 21;

  later_years = (dog_age - 2) * 4;

  //This accounts for the dog years in terms of human years

  human_years = early_years + later_years;

  //This is the dog's total years in terms of human years

  std::cout << "My name is Taiwa! Ruff ruff, I am " << human_years << " years old in human years. \n";
  
  return 0;
}