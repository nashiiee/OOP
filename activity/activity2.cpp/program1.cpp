#include <iostream>
#include <string>

using namespace std;

class College_dean {
protected:
    string name;
    double salary;

public:
    College_dean(string n, double s) : name(n), salary(s) {}

    virtual string to_string() {
        return "Dean's Name: " + name + "\nSalary: " + std::to_string(salary);
    }
};

class OLC : public College_dean {
protected:
    string department;

public:
    OLC(string n, double s, string dept) : College_dean(n, s), department(dept) {}

    string to_string() override {
        return "Dean's Name: " + name + "\nDepartment: " + department + "\nSalary: " + std::to_string(salary);
    }
};

class Operation_manager : public OLC {
public:
    Operation_manager(string n, double s, string dept) : OLC(n, s, dept) {}

    string to_string() override {
        return "Operation Manager\n" + OLC::to_string();
    }
};

int main() {
    Operation_manager opManager("John Doe", 50000, "IT Department");

    cout << opManager.to_string() << endl;

    return 0;
}
