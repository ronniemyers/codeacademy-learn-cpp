// Convert dog's age into human years

#include <iostream>

int main() {
  int dog_age = 3; // current dog age
    int early_years, later_years, human_years;
  early_years = 21;
  later_years = (dog_age - 2)*4; // calculate
  human_years = early_years+later_years; 

  std::cout << "My name is Dave! Ruff ruff, I am " << human_years << " years old in human years. " << "\n";

}