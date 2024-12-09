#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    float *vec = new float[size];
    float x;
    float max = 0;

    cout << "Enter " << size << " integers" << endl;
    for (int i = 0; i < size; i++) {
        cout << "x_"<< i+1 << " = ";
        cin >> x;
        vec[i] = x;
        if (x >= max) {
            max = x;
        }
    }

    cout << "Normalize array:  ";
    for (int n = 0; n < size; n++) {
        vec[n] = vec[n] / max;
        cout << vec[n] << "  ";
    }

    //  Гарт А.
    system("pause");
    return 0;
}