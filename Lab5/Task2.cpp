#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    int x = 0;
    int odd = 0;
    int i;

    cout << "Enter a sequence of integers. { 0 - end of sequence }\n" << endl;

    while (true) {
        x = x + 1;
        cout << "x[" << x << "] = ";
        cin >> i;
        
        if (i > 0 || i < 0) {
            if (i % 2 != 0) {
                odd++;
            }
        }
        else {
            break;
        }
    }

    cout << "\nThere are " << odd << " odd numbers in the sequence " << endl;

    //  Гарт А.
    system("pause");
    return 0;
}