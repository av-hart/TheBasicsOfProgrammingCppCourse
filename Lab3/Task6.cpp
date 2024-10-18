#include <iostream>
using namespace std;

int main(){

    while (true){

        cout << "Think of an integer number" << endl;
        cout << "Multiply it by 10" << endl;
        cout << "Divide the result by 2" << endl;
        cout << "Add the number you have in mind to the result you get" << endl;
        
        int Res;
        cout << "\nEnter what you got: ";
        cin >> Res;

        // (x * 10 / 2) + x = Res
        // 6x = Res
        // таким чином, x = Res / 6 

        if (Res % 6 == 0){
            int x;
            x = Res / 6;
            cout << "\nYour intended number is";

            if (x > 0) {
                cout << " positive and it's: ";
            }
            else if (x < 0) {
                cout << " negative and it's: ";
            }
            else {
                cout << ": ";
            }
            cout << x << "!" << endl;
            break;
        }
        else {
            cout << "\n    ! Your number is not an integer ! Try again\n" << endl;
        }
    }

    cout << "\n@Ann Hart" << endl;
    return 0;
}