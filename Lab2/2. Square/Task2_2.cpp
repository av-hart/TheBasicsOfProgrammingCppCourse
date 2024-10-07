#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter the length of the side of the square (integer): ";
    cin >> n;

    if (n > 0) {
        /* Side AB */
            /* Sq_1 */
            cout << "\nA";
            for (int a = 0; a < n; a++) {
                cout << "---";
            }
            cout << "B              ";

            /* Sq_2 */
            cout << "x";
            for (int a = 0; a < n; a++) {
                cout << "xxx";
            }
            cout << "x" << endl;

        /* Side AD and BC */
        if (n <= 2) {  
            for (int b = 0; b < n; b++) {
                /* Sq_1 */
                cout << "|";
                for (int d = 0; d < n; d++) {
                    cout << "   ";
                }
                cout << "|              ";

                /* Sq_2 */
                cout << "x";
                for (int d = 0; d < n; d++) {
                    cout << "xxx";
                }
                cout << "x" << endl;
                }
        }
        else {
            int up_lim = 6;
            if (n <= up_lim) {
                for (int b = -1; b < n; b++) {
                    /* Sq_1 */
                    cout << "|";
                    for (int d = 0; d < n; d++) {
                        cout << "   ";
                    }
                    cout << "|              ";

                    /* Sq_2 */
                    cout << "x";
                    for (int d = 0; d < n; d++) {
                        cout << "xxx";
                    }
                    cout << "x" << endl;
                }
            } 
            else {
                int b = -1;
                while (n > up_lim) {
                    up_lim += 4;
                    b -= 1;
                    if (n <= up_lim) {
                        for (; b < n; b++) {
                            /*Sq_1*/
                            cout << "|";
                            for (int d = 0; d < n; d++) {
                                cout << "   ";
                            }
                            cout << "|              ";

                            /*Sq_2*/
                            cout << "x";
                            for (int d = 0; d < n; d++) {
                                cout << "xxx";
                            }
                            cout << "x" << endl;
                        }
                    }
                }
            }
        }
        
        /* Side CD */
            /* Sq_1 */
            cout << "D";
            for (int c = 0; c < n; c++) {
                cout << "---";
            }
            cout << "C              ";

            /* Sq_2 */
            cout << "x";
            for (int c = 0; c < n; c++) {
                cout << "xxx";
            }
            cout << "x" << endl;
        
        cout << "\nP = 4 * AB = 4 * "<< n << " = " << n * 4 << endl;
        cout << "S = AB^2 = "<< n << "^2 = " << n * n << endl;
        cout << "AC = BD = sqrt(AB^2 + BC^2) = sqrt(2 * AB^2) = sqrt(2 * " << n << "^2) = " << sqrt(2 * n * n) << endl;
    } 
    else if (n == 0) {
        cout << " ! Length can`t be equal to zero !" << endl;
    }
    else {
        cout << " ! Length can`t be less than zero !" << endl;
    }

    cout << "\n@Ann Hart" << endl;

    cin.ignore();
    cin.get();
    return 0;
}