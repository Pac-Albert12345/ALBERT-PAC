#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    if (s.find('a') != string::npos) cout << "Contains 'a'\n";
    else cout << "Does not contain 'a'\n";
    return 0;
}
