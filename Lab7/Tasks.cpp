#include <iostream>
#include <Windows.h>
using namespace std;

int sum(int a, int b){
    return a + b;
}

bool isPrime (int n){
    if (n <= 1) return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main (){
    cout << "Task_1 (SUM)" << endl;
    int x;
    int y;
    cout << "Enter A: ";
    cin >> x;
    cout << "Enter B: ";
    cin >> y;
    cout << "A + B = " << sum(x, y) << "\n" << endl;

    cout << "Task_2 (isPrime)" << endl;
    cout << "Enter a number: ";
    cin >> x;
    if (isPrime(x)) {
        cout << x << " is prime.\n" << endl;
    } else {
        cout << x << " isn't prime.\n" << endl;
    }

    cout << "Task_3 (Factorial)" << endl;
    cout << "Enter a number: ";
    cin >> x;
    cout << x << "! = " << factorial(x) << endl;
    
    //  Гарт А.
    system("pause");
    return 0;
}
