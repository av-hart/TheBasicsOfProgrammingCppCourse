#include <iostream>
#include <Windows.h>
using namespace std;

/*
Задача "Day of the week"
Програма:
    - Запитує у користувача, ввести з клавіатури будь-яке число.
    - Знаходить відносно числа 1-7 день тижня Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
Підказка: найкраще вирішити цю задачу, це за допомогою “switch, case”
Приклад:
    Вхід: 5
    Вихід: Friday
*/

int main() {

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    num = abs (num);
    if (num > 7) {
        num = num % 7;
    }

    cout << "Day of the week: ";

    switch (num)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        break;
    }

    //  Гарт А.

    cin.ignore();
    cin.get();
    return 0;

}