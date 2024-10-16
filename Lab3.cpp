#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Type number: ";
    cin >> number;

    int divider = 1;
    cout << "Components of division " << number << ": ";
    while (divider <= number) {
        if (number % divider == 0) {
            cout << divider << " ";
        }
        divider++;
    }
    cout << endl;

    return 0;
}
