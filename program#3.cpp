#include <iostream>
#include <algorithm> // Include for std::max

using namespace std;

int main() {
  double num1, num2, num3;

  cout << "Enter three numbers: ";
  cin >> num1 >> num2 >> num3;

  // Method 1: Using std::max (most efficient for more than 2 numbers)
  double largest = max({num1, num2, num3}); //This is the most efficient way

  cout << "The largest number is: " << largest << endl;


  // Method 2:  Nested if-else (works well for 3 numbers)

  double largest2;
  if (num1 >= num2 && num1 >= num3) {
    largest2 = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    largest2 = num2;
  } else {
    largest2 = num3;
  }
  cout << "The largest number (Method 2): " << largest2 << endl;

  return 0;
}
