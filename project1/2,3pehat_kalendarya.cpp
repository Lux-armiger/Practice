#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    cin >> k;
    n = n - 1;

    for (int p = 0; p < n; ++p) {
        cout << "   ";
    }

    for (int day = 1; day <= k; ++day) {
        cout << setw(2) << day << " ";
            if ((day + n) % 7 == 0) {
            cout << endl;
            }
    }

    cout << endl;
}