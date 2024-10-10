#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Date {
    int year, month, day;
};

class Patient {
protected:
    string name;
    Date dateOfAdmission;
    string disease;
    Date dateOfDischarge;

public:
    void inputPatientInfo() {
        cout << "Enter name of the patient: ";
        cin >> name;
        cout << "Enter date of admission (YYYY MM DD): ";
        cin >> dateOfAdmission.year >> dateOfAdmission.month >> dateOfAdmission.day;
        cout << "Enter disease: ";
        cin >> disease;
        cout << "Enter date of discharge (YYYY MM DD): ";
        cin >> dateOfDischarge.year >> dateOfDischarge.month >> dateOfDischarge.day;
    }

    void displayPatientInfo() const {
        cout << "Name: " << name << endl;
        cout << "Date of Admission: " << dateOfAdmission.year << "/" << dateOfAdmission.month << "/" << dateOfAdmission.day << endl;
        cout << "Disease: " << disease << endl;
        cout << "Date of Discharge: " << dateOfDischarge.year << "/" << dateOfDischarge.month << "/" << dateOfDischarge.day << endl;
    }
};

class PediatricPatient : public Patient {
private:
    int age;

public:
    void inputAge() {
        cout << "Enter age of the patient: ";
        cin >> age;
    }

    void displayPatientInfo() const {
        Patient::displayPatientInfo();
        cout << "Age: " << age << " years" << endl;
    }

    bool isPediatric() const {
        return age < 12;
    }
};

int main() {
    vector<PediatricPatient> patients;
    int numPatients;

    cout << "Enter number of patients: ";
    cin >> numPatients;

    for (int i = 0; i < numPatients; ++i) {
        PediatricPatient p;
        cout << "Enter information for patient " << i + 1 << ":" << endl;
        p.inputPatientInfo();
        p.inputAge();
        patients.push_back(p);
    }

    cout << "\nList of all patients:\n";
    for (int i = 0; i < numPatients; ++i) {
        cout << "\nPatient " << i + 1 << " details:\n";
        patients[i].displayPatientInfo();
    }

    cout << "\nList of pediatric patients (less than 12 years):\n";
    for (int i = 0; i < numPatients; ++i) {
        if (patients[i].isPediatric()) {
            cout << "\nPediatric Patient " << i + 1 << " details:\n";
            patients[i].displayPatientInfo();
        }
    }

    return 0;
}