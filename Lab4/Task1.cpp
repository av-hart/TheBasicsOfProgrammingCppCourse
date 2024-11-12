#include <iostream>
#include <Windows.h>
using namespace std;

int main(){

    /*  
    Задача ABS
    Складіть програму "ABS", котра:
        а) питає в людини дійсне число
        b) обчислює модуль Х
        c) виводить результат на екран у наступному вигляді: |Х| = *значення модуля Х*
    */

    float X;
    cout << "Enter a valid number: X = ";
    cin >> X;

    if (X >= 0){
        cout << "\n|X| = |" << X << "| = " << X << endl;
    }
    else {
        cout << "\n|X| = |" << X << "| = ";
        X = -1 * X;
        cout << X << endl;
    }
    
    //  Гарт А.

    cin.ignore();
    cin.get();
    return 0;
}
