#include <iostream>
#include <Windows.h>
#include <cctype> // для isalpha та isdigit
using namespace std;

    /*  
    Задача «В'язень Замку IF»
    Ви опинилися в таємничій камері «Замку IF». Досліджуючи її, ви знайшли потайні двері, які, схоже, ведуть назовні. 
    Але двері зачинені та вимагають введення пароля для розблокування. Уважно оглянувши кімнату, ви знаходите старий 
    запис з таємничим кодом: FR-33-D0M. Можливо, це підказка!
    
    Завдання: Напишіть програму, яка поетапно прийматиме символи від користувача, щоб перевірити правильність введення 
    пароля. Програма має запитувати символи один за одним та порівнювати їх із кодом FR-33-D0M. Якщо користувач вводить 
    правильний символ на кожному етапі, двері відкриваються, і на екрані з’являється напис "Двері відчинено! Ви вільні!". 
    Якщо хоча б один символ введено неправильно, програма виводить повідомлення "Неправильний пароль, спробуйте ще раз." 
    і починає перевірку спочатку.
    */

bool OnlyLetters(const string& str) {
    for (char a : str) {
        if (!isalpha(a)) {
            return false;
        }
    }
    return true;
}

bool OnlyNumbers(const string& str) {
    for (char b : str) {
        if (!isdigit(b)) {
            return false;
        }
    }
    return true;
}

int main(){

   string S;

    while (true) {
        cout << "Enter symbol 1: ";
        cin >> S;
    
        if (OnlyLetters(S)) {
            if (S == "F") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 2: ";
        cin >> S;
    
        if (OnlyLetters(S)) {
            if (S == "R") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 3: ";
        cin >> S;
    
        if (S == "-") {
            cout << "The door is open!\n" << endl;
            break;
        }
        else {
            cout << "The door is still closed, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 4: ";
        cin >> S;
    
        if (OnlyNumbers(S)) {
            if (S == "3") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 5: ";
        cin >> S;
    
        if (OnlyNumbers(S)) {
            if (S == "3") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 6: ";
        cin >> S;
    
        if (S == "-") {
            cout << "The door is open!\n" << endl;
            break;
        }
        else {
            cout << "The door is still closed, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 7: ";
        cin >> S;
    
        if (OnlyLetters(S)) {
            if (S == "D") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 8: ";
        cin >> S;
    
        if (OnlyNumbers(S)) {
            if (S == "0") {
                cout << "The door is open!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    while (true) {
        cout << "Enter symbol 9: ";
        cin >> S;
    
        if (OnlyLetters(S)) {
            if (S == "M") {
                cout << "The password you entered:  FR-33-D0M" << endl;
                cout << "All doors are open, you are free!\n" << endl;
                break;
            }
            else {
                cout << "The door is still closed, try again" << endl;
            }
        } 
        else {
            cout << "Invalid symbol, try again" << endl;
        }
    }

    //  Гарт А.

    cin.ignore();
    cin.get();
    return 0;
}