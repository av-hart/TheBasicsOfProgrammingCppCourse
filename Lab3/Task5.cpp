#include <iostream>
using namespace std;

int main(){
    char name[50];
    cout << "What is your name? ";
    cin >> name;

    int years;
    cout << "How old are you? ";
    cin >> years;

    char ed_inst[100];
    cout << "Where do you study? ";
    cin >> ed_inst;

    cout << "\nHi, " << name << "!" << endl;

    if (years >= 40){
        cout << "Are you seriously " << years << " years old? :0" << endl;
        cout << "It`s cool that at such an age you learned to conduct a dialogue with a computer!" << endl;
        if (years >= 100){
            cout << "Don't kill me, pls" << endl;
        }
        else if (years > 300000){
            cout << "You are older than Homo sapiens" << endl;
        }
    }
    else {
        if (years >= 7){
            cout << "Congratulations! You're";
            if (years <= 18){
                cout << " only ";
            }
            cout << years << " and you're already having a dialogue with a computer!" << endl;
        }
        else {
            cout << "Ohh you're lying that you're " << years << " years old -_-" << endl;
        }
    }

    cout << ed_inst << " will be proud of you!" << endl;

    cout << "\n@Ann Hart" << endl;

    return 0;
}