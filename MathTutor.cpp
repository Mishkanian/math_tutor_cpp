/*
Author: Michael Mishkanian

Description: A program that can be used as a math tutor for a young student. 
The program displays two random numbers to be added and will then 
pause while the student works on the problem. When the student is ready to check 
the answer,they can press a key to display the correct solution.
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int random_num1;
    int random_num2;
    int solution;

    cout << "" << endl
         << "Two numbers will appear on your screen below." << endl 
         << "Please add them togther and then check the solution." << endl
         << "" << endl;

    // generate random numbers less than 1000
    srand(time(0));
    random_num1 = rand() % 999;
    random_num2 = rand() % 999;
    solution = random_num1 + random_num2;

    // print the math problem and message
    cout << "  " << random_num1 << endl;
    cout << "+ " << random_num2 << endl;
    cout << "-----" << endl;
    cout << "Press ENTER or RETURN on your keyboard to show the solution." << endl;

    // pause program while the user works on the problem
    // and print solution when the user presses enter or return
    cin.get();
    cout << "The answer is " << solution << endl
         << "" << endl;

    return 0;
}

