#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int n;
    int vec1 = 0;
    int vec2 = 1;
    int vec_sum;

    while (true) {
        cout << "Enter a non-negative integer. N = ";
        cin >> n;

        if (n < 0) {
            cout << "The number is negative. Try again\n";
        }
        else {
            for (int i = 2; i < n; i++) {
                vec_sum = vec1 + vec2;
                vec1 = vec2;
                vec2 = vec_sum;
            }
            cout << "Fibonacci(" << n << ") = " << vec_sum << endl;
            break;
        }
    }

    //  Гарт А.
    system("pause");
    return 0;
}
