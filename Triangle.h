//
// Created by hloi on 9/15/2022.
//

#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    void SetBase(double userBase);
    void SetHeight(double userHeight);
    double GetArea() const;
    void PrintInfo() const;
};

#endif //TRIANGLE_TRIANGLE_H
