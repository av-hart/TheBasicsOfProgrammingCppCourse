#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    int x = 0;
    int i;
    int max = 0;

    cout << "Enter a sequence of integers. { 0 - end of sequence }\n" << endl;

    while (true) {
        x++;
        cout << "x[" << x << "] = ";
        cin >> i;
        
        if (i > 0 || i < 0) {
            if (i >= max) {
                max = i;
            }
        }
        else {
            break;
        }
    }

    cout << "\nMAX = " << max << endl;

    //  Гарт А.
    system("pause");
    return 0;
}