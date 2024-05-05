// lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rectangle.h"
using namespace std;
void main()
{
    rectangle r1;
        cout << r1.getLength()<< " " << r1.getWidth() << endl;
        rectangle r2(4, 5);
        cout << r2.getLength() << " " << r2.getWidth() << endl;
        r2 += 5;
        rectangle r3 = r2 ;
        cout << r3.getLength() << " " << r3.getWidth() << endl;
        rectangle r4(6, 2);
        cout << r4.getLength() << " " << r4.getWidth() << endl;
        r4 += r3;
        cout << r4.getLength() << " " << r4.getWidth() << endl;
        rectangle r5=r1 * 3;
        cout << r5.getLength() << " " << r5.getWidth() << endl;
        if(r1 == r2)
        cout <<true << endl;
        else
            cout << false << endl;
        ++r1;
        cout << r1.getLength() << " " << r1.getWidth() << endl;
        ++r1;
        cout << r1.getLength() << " " << r1.getWidth() << endl;
        if (r1 != r5)
            cout << true << endl;
        else
            cout << false << endl;






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
