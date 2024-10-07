#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Select language:" << endl;
    cout << "1 - English" << endl;
    cout << "2 - Deutsch" << endl;
    cout << "3 - Ukrainian (transcription)" << endl;
    cout << "Enter your choice (only number): ";
    cin >> choice ;
    
    switch (choice) {
        case 1:
            cout << "\n Hello, world!" << endl;
            break;
        case 2:
            cout << "\n Hallo, Welt!" << endl;
            break;
        case 3:
            cout << "\n Pryvit, cvit!" << endl;
            break;
        default:
            cout << "\n ! Wrong choice !" << endl;
            break;
    }

    cout << "\n@Ann Hart" << endl;

    cin.ignore();
    cin.get();
    return 0;
}