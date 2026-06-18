#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double larger = (a > b) ? a : b;
    cout << larger << "\n";
    return 0;
}
