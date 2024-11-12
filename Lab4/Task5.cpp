#include <iostream>
#include <Windows.h>
using namespace std;

/*
Задача «Chess Figure»
Умови завдання:
1. Спершу оберіть шахову фігуру відповідно до свого варіанту.
2. Введіть початкову позицію фігури на шаховій дошці (наприклад, e4).
3. Введіть координати клітинки, яку потрібно перевірити на загрозу (наприклад, g5).
4. Програма повинна визначити, чи може обрана вами фігура за правилами свого руху потрапити на клітинку, 
   яку потрібно перевірити.
Підказка: з початку необхідно першу введену літеру a-h перевести у 1-8, і розглядати позицію e4 як пару 
чисел (5, 4), а далі порівнювати чи загрожує вона координатам другої клітинки.
*/

int main() {

    // Моя шахова фігура - Bishop (офіцер)

    // Координати офіцера
    string x1;
    int y1;

    cout << "Enter the coordinates of the figure Bishop\n" << endl;

    // Координата офіцера за віссю OХ
    while (true)
    {
        cout << "letter: ";
        cin >> x1;

        if (x1 == "a" || 
            x1 == "b" ||
            x1 == "c" ||
            x1 == "d" ||
            x1 == "e" ||
            x1 == "f" ||
            x1 == "g" ||
            x1 == "h") {
            break;
        }
        else {
            cout << "Invalid symbol, try again\n" << endl;
        }
    }

    // Координата офіцера за віссю OY
    while (true)
    {
        cout << "number: ";
        cin >> y1;

        if (y1 >= 1 && y1 <= 8) {
            break;
        }
        else {
            cout << "Invalid symbol, try again\n" << endl;
        }
    }

    // Координати клітинки, яку потрібно перевірити
    string x2;
    int y2;

    cout << "\nEnter the coordinates of the square to check it\n" << endl;

    while (true) {
        // Координата за віссю OХ
        while (true)
        {
            cout << "letter: ";
            cin >> x2;

            if (x2 == "a" || 
                x2 == "b" ||
                x2 == "c" ||
                x2 == "d" ||
                x2 == "e" ||
                x2 == "f" ||
                x2 == "g" ||
                x2 == "h") {
                break;
            }
            else {
                cout << "Invalid symbol, try again\n" << endl;
            }
        }

        // Координата за віссю OY
        while (true)
        {
            cout << "number: ";
            cin >> y2;

            if (y2 >= 1 && y2 <= 8) {
                cout << "\n";
                break;
            }
            else {
                cout << "Invalid symbol, try again\n" << endl;
            }
        }

        if (x1 == x2 && y1 == y2) {
            cout << "The bishop stands on the same square! Try again\n" << endl;
        }
        else {
            break;
        }
    }

    // Перетворення літер на числа
    int num_x1;
    int num_x2;

    // Для координат офіцера
    if (x1 == "a") {
        num_x1 = 1;
    }
    else if (x1 == "b") {
        num_x1 = 2;
    }
    else if (x1 == "c") {
        num_x1 = 3;
    }
    else if (x1 == "d") {
        num_x1 = 4;
    }
    else if (x1 == "e") {
        num_x1 = 5;
    }
    else if (x1 == "f") {
        num_x1 = 6;
    }
    else if (x1 == "g") {
        num_x1 = 7;
    }
    else {
        num_x1 = 8;
    }
    
    // Для координат заданої клітинки
    if (x2 == "a") {
        num_x2 = 1;
    }
    else if (x2 == "b") {
        num_x2 = 2;
    }
    else if (x2 == "c") {
        num_x2 = 3;
    }
    else if (x2 == "d") {
        num_x2 = 4;
    }
    else if (x2 == "e") {
        num_x2 = 5;
    }
    else if (x2 == "f") {
        num_x2 = 6;
    }
    else if (x2 == "g") {
        num_x2 = 7;
    }
    else {
        num_x2 = 8;
    }

    // Перевірка

    if (num_x1 == num_x2) {
        cout << "The bishop standing on square " << x1 << y1 << "   does not threaten   square " << x2 << y2 << endl;
    }
    else if (y1 == y2) {
        cout << "The bishop standing on square " << x1 << y1 << "   does not threaten   square " << x2 << y2 << endl;
    }
    else {
        int delta = num_x1 - num_x2;
        if (y2 == y1 + delta) {
            cout << "The bishop standing on square " << x1 << y1 << "   threatens   square " << x2 << y2 << endl;
        }
        else if (y2 == y1 - delta) {
            cout << "The bishop standing on square " << x1 << y1 << "   threatens   square " << x2 << y2 << endl;
        }
        else {
            cout << "The bishop standing on square " << x1 << y1 << "   does not threaten   square " << x2 << y2 << endl;
        }
    }

    //  Гарт А.

    cin.ignore();
    cin.get();
    return 0;

}