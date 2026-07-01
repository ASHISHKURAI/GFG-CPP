#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string row;
    for (int i = 0; i < n; i++)
        row += "* ";

    for (int i = 0; i < n; i++)
        cout << row << endl;

    return 0;
}