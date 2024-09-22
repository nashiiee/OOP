#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int temp[8];
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            temp[j++] = arr[i];
        }
    }
    
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    return j;
}

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int findSecondSmallest(int arr[], int n) {
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    return secondSmallest;
}

int main() {
    int numbers[8];
    
    cout << "Enter 8 integers: ";
    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }
    
    int newSize = removeDuplicates(numbers, 8);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    int secondLargest = findSecondLargest(numbers, newSize);
    cout << "Second largest element: " << secondLargest << endl;
    
    int secondSmallest = findSecondSmallest(numbers, newSize);
    cout << "Second smallest element: " << secondSmallest << endl;
    
    return 0;
}
