#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    if (s == "hello") cout << "Hello!\n";
    else cout << "Goodbye!\n";
    return 0;
}
