// Convert currency and display total amount

#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

//currency conversion
dollars = (0.00028*pesos) + (0.20*reais) + (0.29*soles);

std::cout << "US Dollars = $" << dollars;
}