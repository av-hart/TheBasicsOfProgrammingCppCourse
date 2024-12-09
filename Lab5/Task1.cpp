#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    int x = 0;
    int sum = 0;
    int i;

    cout << "Enter a sequence of integers. { 0 - end of sequence }\n" << endl;

    while (true) {
        x = x + 1;
        cout << "x[" << x << "] = ";
        cin >> i;
        
        if (i > 0 || i < 0) {
            sum = sum + i;
        }
        else {
            break;
        }
    }

    cout << "\nSUM = " << sum << endl;

    //  Гарт А.
    system("pause");
    return 0;
}
