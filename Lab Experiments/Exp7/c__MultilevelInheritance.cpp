#include<iostream>
using namespace std;

class Vehicle {
    char mode[20];
public:
    void getdata() {
        cout << "Enter the mode of transport (Land/air/water): ";
        cin >> mode;
    }

    void putdata() {
        cout << "Mode of transport: ";
    }
};

class Autombile: public Vehicle {
    int budget;
    char means[20];
public:
    void getdata() {
        Vehicle::getdata();
        cout << "What is your budget: ";
        cin >> budget;
        cout << "What would be the desired top speed (Car/Bike/Others): ";
        cin >> means;
    }

    void putdata() {
        cout << "Budget: ";
        cout << "Top speed: ";
    }
};

//  Mercerdes Benz: VisionEQS 🥺🔥
class Car: public Autombile {
    char model[20];
    char color[20];
    int max_speed;
    int price;

public:
    void getdata() {
        Autombile::getdata();
        cout << "Model: ";
        cin >> model;

        cout << "Color: ";
        cin >> color;

        cout << "Max speed (mph): ";
        cin >> max_speed;

        cout << "Price (in $): ";
        cin >> price;
    }

    void putdata() {
        cout << "Model: " << model;
        cout << "\nPrice: $" << price;
        cout << "\nColor: " << color;
        cout << "\nMax speed: " << max_speed << "mph";
    }
};

int main() {
    Car C1;
    cout << "\n\n----------------------------Enter Details----------------------------\n\n";
    C1.getdata();
    cout << "---------------------------------------------------------------------\n\n";
    C1.putdata();

    return 0;
}
