#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  // Check if the number is between 0 and 999,999,999.
  if (number < 0 || number > 999999999) {
    cout << "Number is out of range." << endl;
    return 1;
  }

  // Get the number of digits in the number.
  int num_digits = 0;
  while (number != 0) {
    number /= 10;
    num_digits++;
  }

  // Create an array to store the words for each digit.
  string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  // Create a string to store the converted number.
  string converted_number = "";

  // Loop through the number from right to left, adding the words for each digit to the converted number string.
  for (int i = num_digits - 1; i >= 0; i--) {
    converted_number += words[number % 10];
    number /= 10;
  }

  // Reverse the converted number string.
  std::reverse(converted_number.begin(), converted_number.end());

  // Print the converted number.
  cout << converted_number << endl;

  return 0;
}