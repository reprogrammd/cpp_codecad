#include <iostream>
#include <cmath>

int main() {
  
  double a;
  double b;
  double c;
  
  std::cout << "Enter a here \n";
  std::cin >> a;

  std::cout << "Enter b here \n";
  std::cin >> b;

  std::cout << "Enter c here \n";
  std::cin >> c;

  double root1;
  double root2;

  root1 = (-b + (std::sqrt ((b * b) - (4 * a * c)))) / (2 * a);
  root2 = (-b - (std::sqrt ((b * b) - (4 * a * c)))) / (2 * a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  return 0;
}