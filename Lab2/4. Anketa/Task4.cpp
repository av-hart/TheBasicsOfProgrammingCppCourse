#include <iostream>
#include <iomanip> // для setw()
using namespace std;
 
int main(){
    cout << setw(25) << right << "Surname: ";
    cout << "Hart" << endl;

    cout << setw(25) << right << "Name: ";
    cout << "Anna" << endl;

    cout << setw(25) << right << "Middle name: ";
    cout << "Viktorivna" << endl;

    cout << setw(25) << right << "Sex: ";
    cout << "female" << endl;

    cout << setw(25) << right << "Date of birth: ";
    cout << "2007-01-23" << endl;

    cout << setw(25) << right << "Phone number: ";
    cout << "+380970950414" << endl;

    cout << setw(25) << right << "Address (official): ";
    cout << "D. Yavornitsky Avenue, 35, building 3, room 35, MSP 49044, Dnipro, Ukraine" << endl;

    cout << setw(25) << right << "Place of study: ";
    cout << "Department of CM and MC, Faculty of AM and IT, Oles Honchar Dnipro National University" << endl;

    cout << setw(25) << right << "Hobbies: ";
    cout << "solving mathematical problems using programming, drawing people and architectural buildings" << endl;

    cin.ignore();
    cin.get();
    return 0;
}
