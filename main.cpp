#include <iostream>

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

int main() {
  int number;

  std::cout << "Enter a number: ";
  std::cin >> number;

  long long result = factorial(number);

  std::cout << "Factorial of " << number << " is: " << result << std::endl;

  return 0;
}