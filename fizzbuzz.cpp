// Outputs numbers from 1 to 100

#include <iostream>

int main() {

  int i;

  for (i = 1; i <= 100; i++) {
    std::cout << i << "\n";
  }

  if (i % 15 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    } else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } else {
      std::cout << i << "\n";
    }
}