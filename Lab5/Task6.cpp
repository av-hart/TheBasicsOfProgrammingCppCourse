#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    int N;

    while (true) {
        cout << "Enter a positive integer. N = ";
        cin >> N;

        if (N <= 0) {
            cout << "The number is not positive. Try again\n";
        }
        else {
            cout << "{x_n} = {";
            for (int i = 1; i < N; i++){
                cout << i << ", ";
            }
            cout << N << "}" << endl;
            break;
        }
    }

    //  Гарт А.
    system("pause");
    return 0;
}