#include <iostream>
using namespace std;

int main() {
  float numbers[10];
  int positiveCount = 0;
  float positiveSum = 0, minValue;
  int negativeCount = 0;


  cout << "Enter 10 real numbers (negative and positive): " << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Enter number " << i + 1 << ": ";
    cin >> numbers[i];
  }

  minValue = numbers[0];


  for (int i = 0; i < 10; i++) {
      if (numbers[i] > 0) {
          positiveSum += numbers[i];
          positiveCount++;
      }
      if (numbers[i] < 0) {
          negativeCount++;
      }
      if (numbers[i] < minValue) {
          minValue = numbers[i];
      }
  }

  if (positiveCount > 0) {
    float positiveAverage = positiveSum / positiveCount;
    cout << "Sum of positive numbers: " << positiveSum << endl;
    cout << "Average of positive numbers: " << positiveAverage << endl;
  } else {
    cout << "No positive numbers entered." << endl;
  }

  cout << "Count of negative numbers: " << negativeCount << endl;
  cout << "Minimum value in the array: " << minValue << endl;
}