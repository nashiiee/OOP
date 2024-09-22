#include <iostream>
using namespace std;

int main() {
    int arr[5], position, i, n = 5;

    cout << "Enter 5 integers for the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Stored data in Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Enter position of element to delete (1-5): ";
    cin >> position;

    if (position >= 1 && position <= n) {
        for (i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "New data in Array: ";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}
