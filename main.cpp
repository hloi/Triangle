#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle triangle1;
    Triangle triangle2;

    // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
    double height1;
    cin >> height1;
    triangle1.SetHeight(height1);
    double base1;
    cin >> base1;
    triangle1.SetBase(base1);
    // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
    double height2;
    cin >> height2;
    triangle2.SetHeight(height2);
    double base2;
    cin >> base2;
    triangle2.SetBase(base2);

    if (triangle1.GetArea() < triangle2.GetArea()) {
        cout << "Triangle with smaller area:" << endl;
        triangle1.PrintInfo();
    }
    else if (triangle1.GetArea() > triangle2.GetArea()) {
        cout << "Triangle with smaller area:" << endl;
        triangle2.PrintInfo();
    }
    else {
        cout << "Triangle with the same area:" << endl;
        triangle1.PrintInfo();
    }


    // TODO: Determine smaller triangle (use GetArea())
    //       and output smaller triangle's info (use PrintInfo())

    return 0;
}