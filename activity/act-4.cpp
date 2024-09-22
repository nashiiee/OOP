#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements in Array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Even Elements: ";
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd Elements: ";
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
