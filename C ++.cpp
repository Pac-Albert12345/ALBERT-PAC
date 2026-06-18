#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << "\n";
    cout << "Difference: " << a - b << "\n";
    cout << "Product: " << a * b << "\n";
    if (b != 0) cout << "Quotient: " << (double)a / b << "\n";
    else cout << "Cannot divide by zero\n";
    return 0;
}

