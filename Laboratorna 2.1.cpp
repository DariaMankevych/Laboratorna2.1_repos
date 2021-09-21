// Laboratorna 2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я Олегівна
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4 * atan(1.); // число пі
    double a; // вхідний параметр
    // double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "a = "; cin >> a;


    //z1 = (sin((Pi / 2) + 3 * a)) / (1 - (sin(3 * a - Pi)));
    z2 = sqrt (((5 * Pi) / 4) + ((3 * a) / 2));
   

    cout << endl;
    //cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();
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
