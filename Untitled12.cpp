#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2 == 1 && n % 3 == 0) 
        cout << "Odd and divisible by 3\n";
    else 
        cout << "No\n";
    return 0;
}
