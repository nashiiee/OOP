#include <iostream>
#include <string>
using namespace std;

// Base class Professor
class Professor {
protected:
    string name;
    double salary;

public:
    // Constructor
    Professor(string name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    // Method to print professor details
    virtual void toString() const {
        cout << "Professor Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class Deans inherits from Professor
class Deans : public Professor {
protected:
    string department;

public:
    // Constructor
    Deans(string name, double salary, string department) : Professor(name, salary) {
        this->department = department;
    }

    // Overridden method to print dean details
    void toString() const override {
        cout << "Dean's Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class Executive inherits from Deans
class Executive : public Deans {
public:
    // Constructor
    Executive(string name, double salary, string department) : Deans(name, salary, department) {}

    // Overridden method to print executive details
    void toString() const override {
        cout << "Executive Information:" << endl;
        Deans::toString(); // Reuse Deans' toString method
    }
};

// Main program to test the classes
int main() {
    // Create a Dean object
    Deans dean("Dr. Smith", 120000, "Computer Science");

    // Create an Executive object
    Executive executive("Dr. John", 150000, "Engineering");

    // Print information of the Dean
    cout << "Dean's Information:" << endl;
    dean.toString();

    cout << "\n";

    // Print information of the Executive
    cout << "Executive's Information:" << endl;
    executive.toString();

    return 0;
}