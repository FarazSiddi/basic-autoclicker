// AutoClicker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void menu() {
    cout << "Press \'x\' to start the autoclicker and press \'z\' to stop it." << endl;
}

void clicker() {
    bool click{false}; // This is the main switch that will turn on/off the autoclicker

    while (true) {
        if (GetAsyncKeyState('X')) { // If 'x' is pressed, then click = true
            click = true;
        }
        else if (GetAsyncKeyState('Z')) { // If 'z' is pressed, then click = false
            click = false;
        }

        if (click == true) { // This if-statement block below runs when the autoclicker turns on
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(10); // Interval between each click
        }
    }
}

int main() {
    menu();
    clicker();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
