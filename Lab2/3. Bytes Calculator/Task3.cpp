#include <iostream>
using namespace std;

int main() {

    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of 'Hello': " << sizeof("Hello") << " byte(s)" << endl;

    cout << "\n@Ann Hart" << endl;

    cin.ignore();
    cin.get();
    return 0;
}
