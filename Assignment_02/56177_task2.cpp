
#include <iostream>
using namespace std;

class Line
{
private:
    double a, b;

public:
    Line(double valA, double valB) : a(valA), b(valB) {}

    bool intersect( Line &other, double &xIntersect) 
    {
        // Check if the lines are parallel (i.e., if their slopes are equal)
        if (a == other.a)
        {
            return false; 
        }

        // Formula to calculate x-intersect: (b2 - b1) / (a1 - a2)
        xIntersect = (other.b - b) / (a - other.a);
        return true; 
    }
};

int main()
{
    Line line1(3, 5);  // First line: y = 3x + 5
    Line line2(2, 2);  // Second line: y = 2x + 2

    double xIntersect;
    if (line1.intersect(line2, xIntersect))
    {
        cout << "Line1 and Line2 intersect at x = " << xIntersect << endl;
    }
    else
    {
        cout << "Line1 and Line2 are parallel and do not intersect." << endl;
    }

    Line line3(3, 1);  // Another line: y = 3x + 1
    Line line4(3, -4); // Parallel line: y = 3x - 4

    if (line3.intersect(line4, xIntersect))
    {
        cout << "Line3 and Line4 intersect at x = " << xIntersect << endl;
    }
    else
    {
        cout << "Line3 and Line4 are parallel and do not intersect." << endl;
    }

    return 0;
}