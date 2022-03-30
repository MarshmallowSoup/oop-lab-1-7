#pragma once
#include "Point.h"
#include <iostream>
#include <string>
class Triangle
{
private:
    Point P1, P2, P3; // A B C 
public:
    Point getP1() const { return P1; }
    Point getP2() const { return P2; }
    Point getP3() const { return P3; }
    void setP1(double x, double y) { P1.setX(x); P1.setY(y); }
    void setP2(double x, double y) { P2.setX(x); P2.setY(y); }
    void setP3(double x, double y) { P3.setX(x); P3.setY(y); }

    void displayTriangle() const;
    void readTriangle();
    void init(double x1, double y1, double x2, double y2, double x3, double y3);
    

    double getObjX(Point obj) const { return obj.getX(); }
    double getObjY(Point obj) const { return obj.getY(); }
    void setObjX(Point obj, double value) { obj.setX(value); }
    void setObjY(Point obj, double value) { obj.setY(value); }

    double get_a()  const { return distanceOfPoints(P1, P2); }; // Side AB P1-P2 a
    double get_b()  const { return distanceOfPoints(P2, P3); }; // Side BC P2-P3 b
    double get_c()  const { return distanceOfPoints(P1, P3); }; // Side AC P1-P3 c

    double get_A()  const; // Angle A
    double get_B()  const; // Angle B
    double get_C() const; // Angle C

    double hA() const; // Height AH
    double hB() const; // Height BH
    double hC() const; // Height CH

    double perimeter() const;
    string triangleType() const;
    double square() const;
};