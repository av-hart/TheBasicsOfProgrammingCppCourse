#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    cout << "Task_2 (CountEven)" << endl;
    /*
    Скласти програму, яка:
        1. Зчитує із клавіатури послідовність цілих чисел, що закінчується нулем.
        2. Знаходить скільки серед них парних чисел.
        3. Як тільки вводиться число 0, програма припиняє роботу та видає результат підрахунку на екран.
    Приклад:
        Введіть число = 12
        Введіть число = 9
        Введіть число = 4
        Введіть число = 1
        Введіть число = 6
        Введіть число = 0
        Зустрілося 3 парних числа.*/  
              
    int x = 0;
    int even = 0;
    int i;
    cout << "Enter a sequence of integers. { 0 - end of sequence }\n" << endl;
    while (true) {
        x = x + 1;
        cout << "x[" << x << "] = ";
        cin >> i;
        
        if (i > 0 || i < 0) {
            if (i % 2 == 0) {
                even++;
            }
        }
        else {
            break;
        }
    }
    cout << "\nThere are " << even << " even numbers in the sequence\n" << endl;



    cout << "Task_2 (AmongUs)" << endl;
    /*
    На космічному кораблі "Among Us" сталася аварія. Команді необхідно визначити, чи є гравець, який перебував у кімнаті, винним у події.
    Вхідні дані:
        1. Час знаходження гравця в кімнаті (секунди) – ціле число t.
        2. Дії гравця:
            o "Не рухався" – код 0.
            o "Виконував завдання" – код 1.
            o "Бігав поруч" – код 2.
    Умови:
        1. Якщо гравець перебував у кімнаті менше 5 секунд – він не винен.
        2. Якщо гравець виконував завдання – він, ймовірно, член екіпажу.
        3. Якщо гравець бігав поруч – він підозрілий.
        4. У всіх інших випадках вивести "Недостатньо даних для оцінки".
    Результат: Вивести текстовий висновок про винуватість гравця.*/

    while (true) {
        float t;
        cout << "How long was the player in the room (in seconds)? ";
        cin >> t;
        if (t <= 0) {
            cout << "Incorrect time, try again" << endl;
        } else if (t > 0 && t < 5) {
            cout << "The player is not guilty" << endl;
            break;
        } else {
            while (true) {
                int choice;
                cout << "What was he doing?\n    0 - he didn't move\n    1 - he was on a mission\n    2 - he was running nearby" << endl;
                cout << "Enter a choice: ";
                cin >> choice;
                if (choice == 0) {
                    cout << "Insufficient data to make an assessment" << endl;
                } else if (choice == 1) {
                    cout << "The player may be a crew member" << endl;
                    break;
                } else if (choice == 2) {
                    cout << "The player is suspicious" << endl;
                    break;
                } else {
                    cout << "Incorrect choice, try again" << endl;
                }
            }
            break;
        }
    }

    //  Гарт А.
    system("pause");
    return 0;
}
