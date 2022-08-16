#include <iostream>

int main() {
  
  double c_pesos;
  double b_reais;
  double p_soles;
  double dollars;

  std::cout << "Enter your amount of Colombian Pesos here \n";
  std::cin >> c_pesos;

  std::cout << "Enter your amount of Brazilian Reais here \n";
  std::cin >> b_reais;

  std::cout << "Enter your amount of Peruvian Soles here \n";
  std::cin >> p_soles;

// Pesos conversion rate: 0.00024
// Reais conversion rate: 0.20
// Soles conversion rate: 0.26

dollars = ((c_pesos * 0.00024) + (b_reais * 0.20) + (p_soles * 0.26));

std::cout << "US Dollars = $ " << dollars << "\n";

return 0;
}