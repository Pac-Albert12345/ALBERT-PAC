#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    const double pi = 3.14159;
    double area = pi * pow(r, 2); // or r * r
    cout << "Area: " << area << "\n";
    return 0;
}

