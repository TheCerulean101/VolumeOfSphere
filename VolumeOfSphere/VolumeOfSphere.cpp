// VolumeOfSphere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

float r;                        //radius 
const float PI = 3.1415926;     // constant for pi
float equation;                 //C++ doesnt know how to cube something i guess

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "Input radius of sphere with decimal point: ";
    std::cin >> r;
    equation = PI * r * r * r * 4 / 3;
    std::cout << "This is the wrong answer because C++ is stupid:  " << equation << "\n";

   
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
