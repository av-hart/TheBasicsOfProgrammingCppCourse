#include <iostream>
#include <Windows.h>
using namespace std;

int main(){

    /*  
    Задача Temperature
    Ви опинилися на планеті з невідомими атмосферними умовами, і у вас немає точних даних про температуру зовні.
    На планеті може бути холодно, тепло, можливі комфортні умови, проте можуть бути і надзвичайно високі або низькі 
    температури. Але у вас є робот, який вимірює температуру в градусах Цельсія та передає її на корабель. Задача, 
    написати програму для цього робота, яка на вхід приймає температуру в градусах Цельсія та надає інформацію у 
    вигляді, зрозумілому для людини.
    
    Приклад:
        Вхід: 18
        Вихід: Комфортна температура: можна виходити.
    */

    float T;
    cout << "Enter the temperature (Celsius): ";
    cin >> T;

    if (T >= 3000){
        cout << "\nYou, spaceship and robot are dead ;(" << endl;
         /* Наш космічний корабель має сучасний абляційний захист, який 
            дозволяє космічному апарату витримувати темп. лише до 3000°С*/
    }
    else {
        if (T > 120 || T < -150) { // космічні скафандри витримують температуру від -150°С до 120°С
            cout << "\nYour spacesuit won't withstand that temperature" << endl;
            cout << "Don't go outside!" << endl;
            if (T > 2700){
                cout << "\nOh no, our spaceship will soon start melting..." << endl;
                cout << "We have to fly away from here right now!" << endl;
            }
        }
        else {
            cout << "\nYou can put on your spacesuit and walk around the planet!" << endl;
        }
    }
        
    //  Гарт А.

    cin.ignore();
    cin.get();
    return 0;
}