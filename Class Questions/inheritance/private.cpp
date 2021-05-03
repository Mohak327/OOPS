#include <bits/stdc++.h>
using namespace std;

class Worker {
    int age;
public:
    int name;
protected:
    int salary;
};

class Manager : private Worker {
    // name is private
    // salary is private
    // age is not accessible from Manager
};