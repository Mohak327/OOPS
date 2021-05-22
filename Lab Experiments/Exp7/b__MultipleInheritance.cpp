// Multiple inheritance: Two base classes, one child.

#include <iostream>
using namespace std;

class Volume {
    public:
        float volume(float l, float b, float h) {
            return (l * b * h);
        }
};

class Area {
    public:
        float area(float l, float b, float h) {
            return (2 * (l * b + l * h + b * h));
        }
};

class Cuboid: private Volume, private Area {
private:
    float length, breadth, height;

public:
    Cuboid(): length(0.0), breadth(0.0), height(0.0) {}

    void getDimensions() {
        cout << "\nEnter the length of the cuboid: ";
        cin >> length;

        cout << "Enter the breadth of the cuboid: ";
        cin >> breadth;

        cout << "Enter the height of the cuboid: ";
        cin >> height;
    }

    float volume() {
        return Volume::volume(length, breadth, height);
    }

    float area() {
        return Area::area(length, breadth, height);
    }
};

//Defining the main method to access the members of the class
int main() {

    Cuboid cuboid;

    cuboid.getDimensions();
    cout << "\n\n";

    cout << "\nArea of the cuboid: " << cuboid.area() << "\n";
    cout << "Volume of the cuboid: " << cuboid.volume();

    cout << "\n\n\n";

    return 0;
}
