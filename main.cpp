
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Your Full Name" << endl;

    const float PI = 3.14f;
    int age;
    float radius;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    float area = PI * radius * radius;

    cout << "\nAge: " << age << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area of circle: " << area << endl;

    cout << boolalpha;
    cout << "Age is greater than 18: " << (age > 18) << endl;
    cout << "Age is valid and radius is positive: "
         << (age > 0 && radius > 0) << endl;

    return 0;
}
