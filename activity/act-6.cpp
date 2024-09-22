#include <iostream>
using namespace std;

int main() {
    
    float basicSalary = 12000;
    float da = basicSalary * 0.12;  
    float hra = 150;                
    float ta = 120;                 
    float others = 450;             
    float pf = basicSalary * 0.14;  
    float it = basicSalary * 0.15;  

    float netSalary = basicSalary + da + hra + ta + others - (pf + it);

    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
