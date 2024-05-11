#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        // Print spaces for indentation
        for (int col = 0; col < n - row - 1; col++) {
            cout << " ";
        }

        // Print asterisks for the pyramid
        for (int col = 0; col < 2 * row + 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
