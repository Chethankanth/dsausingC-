#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout <<"enter the number u want to reverse: ";
    cin >> n;
    int ans = 0;
    int digit = 0;

    while (n != 0) {
        digit = n % 10;

        // Check for overflow and underflow
        if ((ans > (INT_MAX / 10)) || (ans < (INT_MIN / 10))) {
            cout << "Overflow or underflow occurred" << endl;
            return 0;
        } else {
            ans = (ans * 10) + digit;
        }

        n = n / 10;  // Reduce n by dividing by 10, not bitwise shift
    }

    cout << "Reversed number: " << ans << endl;
    return 0;
}
