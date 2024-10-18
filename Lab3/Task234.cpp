#include <iostream>
#include <cstring> // для strcpy
using namespace std;

int main(){
    
    cout << "There are such variables: A, B, C and D" << endl;
    cout << "\nHow many variables do you want to work with?" << endl;
    cout << "   2 (A and B)" << endl;
    cout << "   3 (A, B and C)" << endl;
    cout << "   4 (A, B, C and D)" << endl;

    int choice;
    cout << "\nEnter your choice (number): ";
    cin >> choice;

    switch (choice) {
        case 2:
            cout << "\nEnter the values:" << endl;

            char A2[50];
            cout << "A = ";
            cin >> A2;
            
            char B2[50];
            cout << "B = ";
            cin >> B2;
            
            char swap2[50];

            //swap
            strcpy(swap2, A2);
            strcpy(A2, B2);
            strcpy(B2, swap2);

            cout << "\nResult:  A = " << A2 << ",  B = " << B2 << endl;
            break;
        case 3:
            cout << "\nEnter the values:" << endl;
            
            char A3[50];
            cout << "A = ";
            cin >> A3;
            
            char B3[50];
            cout << "B = ";
            cin >> B3;

            char C3[50];
            cout << "C = ";
            cin >> C3;

            char swap3_1[50];
            char swap3_2[50];

            cout << "\nResult:" << endl;

            //swap1
            strcpy(swap3_1, A3);
            strcpy(A3, B3);
            strcpy(B3, C3);
            strcpy(C3, swap3_1);
            cout << "Swap1.  A = " << A3 << ",  B = " << B3 << ",  C = " << C3 << endl;

            //swap2
            strcpy(swap3_2, A3);
            strcpy(A3, B3);
            strcpy(B3, C3);
            strcpy(C3, swap3_2);
            cout << "Swap2.  A = " << A3 << ",  B = " << B3 << ",  C = " << C3 << endl;
            break;
        case 4:
            cout << "\nEnter the values:" << endl;
            
            char A4[50];
            cout << "A = ";
            cin >> A4;
            
            char B4[50];
            cout << "B = ";
            cin >> B4;

            char C4[50];
            cout << "C = ";
            cin >> C4;

            char D4[50];
            cout << "D = ";
            cin >> D4;
            
            char swap4_1[50];
            char swap4_2[50];
            char swap4_3[50];

            cout << "\nResult:" << endl;

            //swap1
            strcpy(swap4_1, A4);
            strcpy(A4, B4);
            strcpy(B4, C4);
            strcpy(C4, D4);
            strcpy(D4, swap4_1);
            cout << "Swap1.  A = " << A4 << ",  B = " << B4 << ",  C = " << C4 << ",  D = " << D4 << endl;

            //swap2
            strcpy(swap4_2, A4);
            strcpy(A4, B4);
            strcpy(B4, C4);
            strcpy(C4, D4);
            strcpy(D4, swap4_2);
            cout << "Swap2.  A = " << A4 << ",  B = " << B4 << ",  C = " << C4 << ",  D = " << D4 << endl;
            
            //swap3
            strcpy(swap4_3, A4);
            strcpy(A4, B4);
            strcpy(B4, C4);
            strcpy(C4, D4);
            strcpy(D4, swap4_3);
            cout << "Swap3.  A = " << A4 << ",  B = " << B4 << ",  C = " << C4 << ",  D = " << D4 << endl;

            break;
        default:
            cout << "\n ! Wrong choice !" << endl;
            break;
    }

    cout << "\n@Ann Hart" << endl;

    return 0;
}