#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "Program MENU:" << endl;
        cout << "   1. News of the Day" << endl;
        cout << "   2. Joke of the Week" << endl;
        cout << "   3. About Author!" << endl;
        cout << "   0. Exit!" << endl;
        cout << "Enter the appropriate number and click ENTER: ";
        cin >> choice ;
        

        if (choice == 0) {
            break;
        }
        else if (choice == 1) {
            cout << "\n    DTEK updated the shutdown schedule for today\n" << endl;
        }
        else if (choice == 2) {
            cout << "\n    Germany and USA are recalling ther citizens from jokes about a Russian," << endl;
            cout << "a German and an American\n" << endl;
        }
        else if (choice == 3) {
            cout << "\n    Hi! My name is Anna. I`m 17 y.o. I live in Dnipro and study at DNU" << endl;
            cout << "at the Faculty of AM and IT\n" << endl;
        }
        else {
            cout << "\n    Wrong choice. Try again\n" << endl;
        }

        for (int i = 0; i <= 37; i++) {
            cout << "*^";
        }
        cout << "\n" << endl;
    }

    //  Гарт А.
    system("pause");
    return 0;
}