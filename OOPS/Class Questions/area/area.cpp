#include <iostream>
#include <math.h>
#include<conio.h>

using namespace std;

class area
{
    public :

        double areaTriangle(int base, int height) {
            return(0.5*base*height);
        }

        double areaRectangle(int horiSide, int vertSide) {
            return(horiSide*vertSide);
        }

        double areaCircle(int radius) {
            return(3.14*radius*radius);
        }
};


int main() {

    area shapes;
    int base, height, horiSide, vertSide, radius, choice;

    cout << "\nChoose the polygon: \n";
    cout << "----------------------------\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "3. Circle\n";
    cout << "4. Exit\n";
    cout << "----------------------------\n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    do {
        switch (choice) {
        case 1:
            cout << "\nEnter the height: ";
            cin >> height;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Area of the triangle is: " << shapes.areaTriangle(base, height);
            break;
        case 2:
            cout << "\nEnter the first side: ";
            cin >> horiSide;
            cout << "Enter the second side: ";
            cin >> vertSide;
            cout << "Area of the rectangle is: " << shapes.areaRectangle(horiSide, vertSide);
            break;
        case 3:
            cout << "\nEnter the radius: ";
            cin >> radius;
            cout << "Area of the circle is: " << shapes.areaCircle(radius);
            break;
        case 4:
            cout << "Exiting...\n";
            exit(0);
        default:
            cout << "Invalid input.\n";
            cout << "Please enter the correct input.\n";
        }
    }   while(1);
}


