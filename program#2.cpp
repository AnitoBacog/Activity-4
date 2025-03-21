#include <iostream>

bool isLeap(int year) {
  // A leap year is divisible by 4, but not by 100 unless it's also divisible by 400.
  if (year % 4 != 0) return false;
  if (year % 100 == 0) {
    if (year % 400 == 0) return true;
    else return false;
  }
  return true;
}

int main() {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;

  if (isLeap(year)) {
    std::cout << year << " is a leap year." << std::endl;
  } else {
    std::cout << year << " is not a leap year." << std::endl;
  }
  return 0;
}
