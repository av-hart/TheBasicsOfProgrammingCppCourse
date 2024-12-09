#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec;
    int x;
    
    cout << "Enter 20 integers of sequence." << endl;
    for (int i = 0; i < 20; i++) {
        cout << "x_"<< i+1 << " = ";
        cin >> x;
        vec.push_back(x);
    }

    int n;
    cout << "Enter a number to search: ";
    cin >> n;

    int found = 0;
    for (size_t a = 0; a < vec.size(); a++) {
        if (vec[a] == n) {
            found = found + 1;
            cout << "Number found on index: " << a+1 << endl;
        }
    }
    
    if (found == 0) {
        cout << "Such a number has not been found in the sequence" << endl;
    }

    //  Гарт А.
    system("pause");
    return 0;
}
