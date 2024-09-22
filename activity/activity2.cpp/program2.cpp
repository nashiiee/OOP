#include <iostream>
#include <string>

using namespace std;

struct Phone {
    string area_code;
    string exchange;
    string number;
};

void displayPhone(const Phone &p) {
    cout << "(+" << p.area_code << ") " << p.exchange << "-" << p.number << endl;
}

int main() {
    Phone my_number = { "88", "02", "8156488" }; 
    Phone user_number;                          

    cout << "Enter your area code: ";
    cin >> user_number.area_code;

    cout << "Enter your exchange code: ";
    cin >> user_number.exchange;

    cout << "Enter your number: ";
    cin >> user_number.number;

    cout << "\nMy number is: ";
    displayPhone(my_number);

    cout << "Your number is: ";
    displayPhone(user_number);

    return 0;
}
