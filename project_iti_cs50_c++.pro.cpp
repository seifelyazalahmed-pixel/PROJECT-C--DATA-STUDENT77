#include <iostream>
using namespace std;
// project by me
// eng.Ahmed hany seif elyazal mohamed
void year1() {
    int choice;
    cout << "1- math 1" << endl;
    cout << "2- physics 1" << endl;
    cout << "3- chemistry" << endl;
    cout << "4- engineering Drawing" << endl;
    cout << "5- mechanics 1" << endl;
    cout << "Choose subject number: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
        cout << "Data displayed and downloaded for you." << endl;
    else
        cout << "Sorry, data for this subject is not on the system yet." << endl;
}

void year2() {
    int choice;
    cout << "1- math 3" << endl;
    cout << "2- electric circuits" << endl;
    cout << "3-mechanics 2 " << endl;
    cout << "4- prom 1" << endl;
    cout << "5- data structures" << endl;
    cout << "Choose subject number: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
        cout << "Data displayed and downloaded for you." << endl;
    else
        cout << "Sorry, data for this subject is not on the system yet." << endl;
}

void year3() {
    int choice;
    cout << "1- control systems" << endl;
    cout << "2- signals and systems" << endl;
    cout << "3- prom 2" << endl;
    cout << "4- network 1"  << endl;
    cout << "5- machine design" << endl;
    cout << "Choose subject number: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
        cout << "Data displayed and downloaded for you." << endl;
    else
        cout << "Sorry, data for this subject is not on the system yet." << endl;
}

void year4() {
    int choice;
    cout << "1- power systems" << endl;
    cout << "2- communications" << endl;
    cout << "3- prom 3" << endl;
    cout << "4- digital signal processing" << endl;
    cout << "5- project management" << endl;
    cout << "Choose subject number: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
        cout << "Data displayed and downloaded for you." << endl;
    else
        cout << "Sorry, data for this subject is not on the system yet." << endl;
}

void year5() {
    int choice;
    cout << "1- graduation project" << endl;
    cout << "2- renewable energy" << endl;
    cout << "3- robotics" << endl;
    cout << "4- prom 4" << endl;
    cout << "5- quality control" << endl;
    cout << "Choose subject number: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
        cout << "Data displayed and downloaded for you." << endl;
    else
        cout << "Sorry, data for this subject is not on the system yet." << endl;
}

int main() {
    int year;
    cout << "Enter your year (1-5): ";
    cin >> year;

    if (year == 1)
        year1();
    else if (year == 2)
        year2();
    else if (year == 3)
        year3();
    else if (year == 4)
        year4();
    else if (year == 5)
        year5();
    else
        cout << "Invalid year." << endl;

    return 0;
}
