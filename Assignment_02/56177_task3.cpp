#include<iostream>
#include <cmath>
using namespace std;

class Polygon
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Triangle : public Polygon
{
protected:
    double side1, side2, side3;

public:
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

    double area() const override
    {
        double s = perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override
    {
        return side1 + side2 + side3;
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(double base, double equalSide) : Triangle(equalSide, equalSide, base) {}
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}
};

class Quadrilateral : public Polygon
{
protected:
    double side1, side2, side3, side4;

public:
    Quadrilateral(double side1, double side2, double side3, double side4) : side1(side1), side2(side2), side3(side3), side4(side4) {}

    double perimeter() const override
    {
        return side1 + side2 + side3 + side4;
    }
};

class Rectangle : public Quadrilateral
{
public:
    Rectangle(double length, double width) : Quadrilateral(length, width, length, width) {}

    double area() const override
    {
        return side1 * side2;
    }
};

class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}
};

class Pentagon : public Polygon
{
private:
    double side;

public:
    Pentagon(double side) : side(side) {}

    double area() const override
    {
        return (5 * side * side) / (4 * tan(M_PI / 5));
    }

    double perimeter() const override
    {
        return 5 * side;
    }
};

class Hexagon : public Polygon
{
private:
    double side;

public:
    Hexagon(double side) : side(side) {}

    double area() const override
    {
        return (3 * sqrt(3) * side * side) / 2;
    }

    double perimeter() const override
    {
        return 6 * side;
    }
};

class Octagon : public Polygon
{
private:
    double side;

public:
    Octagon(double side) : side(side) {}

    double area() const override
    {
        return 2 * (1 + sqrt(2)) * side * side;
    }

    double perimeter() const override
    {
        return 8 * side;
    }
};

int main()
{
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\nPolygon Menu:\n";
        cout << "1. Triangle\n";
        cout << "2. Isosceles Triangle\n";
        cout << "3. Equilateral Triangle\n";
        cout << "4. Rectangle\n";
        cout << "5. Square\n";
        cout << "6. Pentagon\n";
        cout << "7. Hexagon\n";
        cout << "8. Octagon\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 9)
            break;

        Polygon* polygon = nullptr;

        if (choice == 1)
        {
            double side1, side2, side3;
            cout << "Enter the three sides of the triangle: ";
            cin >> side1 >> side2 >> side3;
            polygon = new Triangle(side1, side2, side3);
        }
        else if (choice == 2)
        {
            double base, equalSide;
            cout << "Enter base & equal side of the Isosceles Triangle: ";
            cin >> base >> equalSide;
            polygon = new IsoscelesTriangle(base, equalSide);
        }
        else if (choice == 3)
        {
            double side;
            cout << "Enter side of the Equilateral Triangle: ";
            cin >> side;
            polygon = new EquilateralTriangle(side);
        }
        else if (choice == 4)
        {
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            polygon = new Rectangle(length, width);
        }
        else if (choice == 5)
        {
            double side;
            cout << "Enter side of the square: ";
            cin >> side;
            polygon = new Square(side);
        }
        else if (choice == 6)
        {
            double side;
            cout << "Enter side of the pentagon: ";
            cin >> side;
            polygon = new Pentagon(side);
        }
        else if (choice == 7)
        {
            double side;
            cout << "Enter side of the hexagon: ";
            cin >> side;
            polygon = new Hexagon(side);
        }
        else if (choice == 8)
        {
            double side;
            cout << "Enter side of the octagon: ";
            cin >> side;
            polygon = new Octagon(side);
        }
        else
        {
            cout << "Invalid choice!\n";
            continue; // Skip to the next iteration if choice is invalid
        }

        cout << "Area: " << polygon->area() << endl;
        cout << "Perimeter: " << polygon->perimeter() << endl;
        delete polygon;
    }



    return 0;
}
