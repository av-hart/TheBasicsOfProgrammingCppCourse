#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    
    string message;

    while (true) {
        cout << "Enter your message: ";
        getline(cin, message);
        cout << "The parrot says: " << message << "\n" << endl;

        if (message.find("Bye") != string::npos) {
            break;
        }
        else if (message.find("Farewell") != string::npos) {
            break;
        }
        else {
            message.clear();
        }
    }

    //  Гарт А.
    system("pause");
    return 0;
}