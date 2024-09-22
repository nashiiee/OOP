#include <iostream>
using namespace std;

// Function for Task 1: Sum and average of positive numbers, count negative numbers, find minimum value
void task1() {
    float numbers[10];
    int positiveCount = 0;
    float positiveSum = 0;
    float minValue;
    int negativeCount = 0;

    // Reading 10 real numbers into the array
    cout << "Enter 10 real numbers (negative and positive): " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Find sum, average of positive numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            positiveSum += numbers[i];
            positiveCount++;
        }
    }

    if (positiveCount > 0) {
        float positiveAverage = positiveSum / positiveCount;
        cout << "Sum of positive numbers: " << positiveSum << endl;
        cout << "Average of positive numbers: " << positiveAverage << endl;
    } else {
        cout << "No positive numbers entered." << endl;
    }

    // Count negative numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] < 0) {
            negativeCount++;
        }
    }
    cout << "Count of negative numbers: " << negativeCount << endl;

    // Find minimum value
    minValue = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }
    cout << "Minimum value in the array: " << minValue << endl;
}

// Function for Task 2: Remove duplicates, find second largest and second smallest elements
void task2() {
    int numbers[8];
    int n = 8;

    // Reading 8 integers into the array
    cout << "Enter 8 integer numbers: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                for (int k = j; k < n - 1; k++) {
                    numbers[k] = numbers[k + 1];
                }
                n--;
                j--; // Check this position again
            }
        }
    }

    // Find second largest element
    int largest = numbers[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    // Find second smallest element
    int smallest = numbers[0], secondSmallest = -1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            secondSmallest = smallest;
            smallest = numbers[i];
        } else if (numbers[i] < secondSmallest && numbers[i] != smallest) {
            secondSmallest = numbers[i];
        }
    }

    // Display results
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Second largest element: " << secondLargest << endl;
    cout << "Second smallest element: " << secondSmallest << endl;
}

// Function for Task 3: Delete element from specific position
void task3() {
    int numbers[5];
    int n = 5, pos;

    // Reading 5 elements into the array
    cout << "Enter 5 elements in the array: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Display the array
    cout << "Stored data in array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Ask the user for the position of the element to delete
    cout << "Enter position of element to delete (1-5): ";
    cin >> pos;

    // Delete the element at the specified position
    if (pos > 0 && pos <= n) {
        for (int i = pos - 1; i < n - 1; i++) {
            numbers[i] = numbers[i + 1];
        }
        n--;
    }

    // Display the updated array
    cout << "New data in array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

// Function for Task 4: Find even and odd elements in array
void task4() {
    int numbers[5];

    // Reading 5 elements into the array
    cout << "Enter 5 elements in the array: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Display even elements
    cout << "Even elements: ";
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    // Display odd elements
    cout << "Odd elements: ";
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}

// Function for Task 5: Print pattern
void task5() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*A";
        }
        cout << endl;
    }
}

// Function for Task 6: Calculate net salary
void task6() {
    const float basicSalary = 12000;
    const float DA = 0.12 * basicSalary;
    const float HRA = 150;
    const float TA = 120;
    const float others = 450;
    const float PF = 0.14 * basicSalary;
    const float IT = 0.15 * basicSalary;

    // Net Salary Calculation
    float netSalary = basicSalary + DA + HRA + TA + others - (PF + IT);
    cout << "Net Salary of the employee: $" << netSalary << endl;
}

// Main function
int main() {
    int choice;
    char cont;

    do {
        cout << "Choose the program you want to run\n";
        cout << "1. Task 1\n";
        cout << "2. Task 2\n";
        cout << "3. Task 3\n";
        cout << "4. Task 4\n";
        cout << "5. Task 5\n";
        cout << "6. Task 6\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}
